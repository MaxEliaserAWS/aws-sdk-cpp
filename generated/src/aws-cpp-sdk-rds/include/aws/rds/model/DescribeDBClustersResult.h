﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBCluster.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeDBClusters</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBClustersResult
  {
  public:
    AWS_RDS_API DescribeDBClustersResult();
    AWS_RDS_API DescribeDBClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a later DescribeDBClusters
     * request.</p>
     */
    inline DescribeDBClustersResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline const Aws::Vector<DBCluster>& GetDBClusters() const{ return m_dBClusters; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline void SetDBClusters(const Aws::Vector<DBCluster>& value) { m_dBClusters = value; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline void SetDBClusters(Aws::Vector<DBCluster>&& value) { m_dBClusters = std::move(value); }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& WithDBClusters(const Aws::Vector<DBCluster>& value) { SetDBClusters(value); return *this;}

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& WithDBClusters(Aws::Vector<DBCluster>&& value) { SetDBClusters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& AddDBClusters(const DBCluster& value) { m_dBClusters.push_back(value); return *this; }

    /**
     * <p>Contains a list of DB clusters for the user.</p>
     */
    inline DescribeDBClustersResult& AddDBClusters(DBCluster&& value) { m_dBClusters.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeDBClustersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeDBClustersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<DBCluster> m_dBClusters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
