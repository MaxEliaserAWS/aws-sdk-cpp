﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{
  class CreateSkillGroupResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateSkillGroupResult();
    AWS_ALEXAFORBUSINESS_API CreateSkillGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API CreateSkillGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArn = value; }

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline CreateSkillGroupResult& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline CreateSkillGroupResult& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the newly created skill group in the response.</p>
     */
    inline CreateSkillGroupResult& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSkillGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSkillGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSkillGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_skillGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
