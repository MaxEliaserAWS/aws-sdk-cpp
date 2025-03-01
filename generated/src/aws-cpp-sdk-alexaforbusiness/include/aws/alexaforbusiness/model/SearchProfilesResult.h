﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ProfileData.h>
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
  class SearchProfilesResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchProfilesResult();
    AWS_ALEXAFORBUSINESS_API SearchProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline const Aws::Vector<ProfileData>& GetProfiles() const{ return m_profiles; }

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetProfiles(const Aws::Vector<ProfileData>& value) { m_profiles = value; }

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetProfiles(Aws::Vector<ProfileData>&& value) { m_profiles = std::move(value); }

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchProfilesResult& WithProfiles(const Aws::Vector<ProfileData>& value) { SetProfiles(value); return *this;}

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchProfilesResult& WithProfiles(Aws::Vector<ProfileData>&& value) { SetProfiles(std::move(value)); return *this;}

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchProfilesResult& AddProfiles(const ProfileData& value) { m_profiles.push_back(value); return *this; }

    /**
     * <p>The profiles that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchProfilesResult& AddProfiles(ProfileData&& value) { m_profiles.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of room profiles returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of room profiles returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of room profiles returned.</p>
     */
    inline SearchProfilesResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProfileData> m_profiles;

    Aws::String m_nextToken;

    int m_totalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
