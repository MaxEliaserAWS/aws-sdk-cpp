﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/DeviceData.h>
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
  class SearchDevicesResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API SearchDevicesResult();
    AWS_ALEXAFORBUSINESS_API SearchDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API SearchDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline const Aws::Vector<DeviceData>& GetDevices() const{ return m_devices; }

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceData>& value) { m_devices = value; }

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceData>&& value) { m_devices = std::move(value); }

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchDevicesResult& WithDevices(const Aws::Vector<DeviceData>& value) { SetDevices(value); return *this;}

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchDevicesResult& WithDevices(Aws::Vector<DeviceData>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchDevicesResult& AddDevices(const DeviceData& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>The devices that meet the specified set of filter criteria, in sort
     * order.</p>
     */
    inline SearchDevicesResult& AddDevices(DeviceData&& value) { m_devices.push_back(std::move(value)); return *this; }


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
    inline SearchDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned to indicate that there is more data available.</p>
     */
    inline SearchDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of devices returned.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of devices returned.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of devices returned.</p>
     */
    inline SearchDevicesResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeviceData> m_devices;

    Aws::String m_nextToken;

    int m_totalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
