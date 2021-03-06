/**
* Copyright 2017 IBM Corp. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/


#ifndef SELF_TELEPHONYINTENT_H
#define SELF_TELEPHONYINTENT_H

#include "IIntent.h"

class SELF_API TelephonyIntent : public IIntent
{
public:
	RTTI_DECL();

	//! Types
	typedef boost::shared_ptr<TelephonyIntent>		    SP;
	typedef boost::weak_ptr<TelephonyIntent>			WP;

	//! ISerializable interface
	virtual void Serialize(Json::Value & json);
	virtual void Deserialize(const Json::Value & json);

	//! IIntent interface
	virtual void Create(const Json::Value & a_Intent, const Json::Value & a_Parse);

	void SetText(const std::string & a_Text)
	{
		m_Text = a_Text;
	}

	void SetToNumber(const std::string & a_Number)
	{
		m_ToNumber = a_Number;
	}

	const std::string & GetText() const
	{
		return m_Text;
	}

	const std::string & GetTelephonyAction() const
	{
		return m_TelephonyAction;
	}

	const std::string & GetToNumber() const
	{
		return m_ToNumber;
	}

private:
	//! Data
	std::string     m_Text;
	std::string     m_TelephonyAction;
	std::string     m_ToNumber;

};

#endif //SELF_TELEPHONYINTENT_H