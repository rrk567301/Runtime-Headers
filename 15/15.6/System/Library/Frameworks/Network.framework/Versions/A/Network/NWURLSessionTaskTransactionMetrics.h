@class NSObject, NSString, NSURLResponse, NSUUID, NSDate, NSURLRequest, NSNumber;
@protocol OS_nw_protocol_metadata;

@interface NWURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics {
    struct NWURLSessionConnectionTiming { unsigned long long domainLookupStartMS; unsigned long long domainLookupDurationMS; unsigned long long connectStartTimeMS; unsigned long long connectDurationMS; unsigned long long secureConnectionDurationMS; char secure; char valid; unsigned char __pad[6]; } connectionTiming;
    NSObject<OS_nw_protocol_metadata> *_transactionMetadata;
    NSObject<OS_nw_protocol_metadata> *_clientMetadata;
}

@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly, copy, nonatomic) NSDate *fetchStartDate;
@property (readonly, copy, nonatomic) NSDate *domainLookupStartDate;
@property (readonly, copy, nonatomic) NSDate *domainLookupEndDate;
@property (readonly, copy, nonatomic) NSDate *connectStartDate;
@property (readonly, copy, nonatomic) NSDate *secureConnectionStartDate;
@property (readonly, copy, nonatomic) NSDate *secureConnectionEndDate;
@property (readonly, copy, nonatomic) NSDate *connectEndDate;
@property (readonly, copy, nonatomic) NSDate *requestStartDate;
@property (readonly, copy, nonatomic) NSDate *requestEndDate;
@property (readonly, copy, nonatomic) NSDate *responseStartDate;
@property (readonly, copy, nonatomic) NSDate *responseEndDate;
@property (readonly, copy, nonatomic) NSString *networkProtocolName;
@property (readonly, nonatomic, getter=isProxyConnection) char proxyConnection;
@property (readonly, nonatomic, getter=isReusedConnection) char reusedConnection;
@property (readonly, nonatomic) long long resourceFetchType;
@property (readonly, nonatomic) long long countOfRequestHeaderBytesSent;
@property (readonly, nonatomic) long long countOfRequestBodyBytesSent;
@property (readonly, nonatomic) long long countOfRequestBodyBytesBeforeEncoding;
@property (readonly, nonatomic) long long countOfResponseHeaderBytesReceived;
@property (readonly, nonatomic) long long countOfResponseBodyBytesReceived;
@property (readonly, nonatomic) long long countOfResponseBodyBytesAfterDecoding;
@property (readonly, copy, nonatomic) NSString *localAddress;
@property (readonly, copy, nonatomic) NSNumber *localPort;
@property (readonly, copy, nonatomic) NSString *remoteAddress;
@property (readonly, copy, nonatomic) NSNumber *remotePort;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy, nonatomic) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, nonatomic, getter=isCellular) char cellular;
@property (readonly, nonatomic, getter=isExpensive) char expensive;
@property (readonly, nonatomic, getter=isConstrained) char constrained;
@property (readonly, nonatomic, getter=isMultipath) char multipath;
@property (readonly, nonatomic) long long domainResolutionProtocol;
@property (readonly, copy, nonatomic) NSUUID *_connectionIdentifier;
@property (readonly, nonatomic) int _privacyStance;
@property (readonly, nonatomic) char _isUnlistedTracker;
@property (readonly, nonatomic) char _usedTFO;

- (void).cxx_destruct;
- (id)_establishmentReport;

@end
