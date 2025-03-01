﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutAppInstanceRetentionSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAppInstanceRetentionSettingsResult::PutAppInstanceRetentionSettingsResult()
{
}

PutAppInstanceRetentionSettingsResult::PutAppInstanceRetentionSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutAppInstanceRetentionSettingsResult& PutAppInstanceRetentionSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppInstanceRetentionSettings"))
  {
    m_appInstanceRetentionSettings = jsonValue.GetObject("AppInstanceRetentionSettings");

  }

  if(jsonValue.ValueExists("InitiateDeletionTimestamp"))
  {
    m_initiateDeletionTimestamp = jsonValue.GetDouble("InitiateDeletionTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
