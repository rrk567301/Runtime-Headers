@class NSUUID, NSString, NSDate, NSURLResponse, NSURLRequest, NSObject, NSNumber, __CFN_TransactionMetrics;
@protocol OS_nw_establishment_report, OS_nw_data_transfer_report;

@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {
    char __forCache;
    __CFN_TransactionMetrics *__metrics;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char _secureConnection;
@property (readonly) char _localCache;
@property (readonly) char _serverPush;
@property (readonly) char _connectionRace;
@property (readonly) unsigned int _redirected;
@property (readonly, copy) NSString *_localAddressAndPort;
@property (readonly, copy) NSString *_remoteAddressAndPort;
@property (readonly, copy) NSUUID *_connectionIdentifier;
@property (readonly) long long _requestHeaderBytesSent;
@property (readonly) long long _responseHeaderBytesReceived;
@property (readonly) long long _responseBodyBytesReceived;
@property (readonly) long long _responseBodyBytesDecoded;
@property (readonly) char _apsRelayAttempted;
@property (readonly) char _apsRelaySucceeded;
@property (readonly) long long _totalBytesSent;
@property (readonly) long long _totalBytesReceived;
@property (readonly) int _negotiatedTLSProtocol;
@property (readonly) unsigned int _negotiatedTLSCipher;
@property (readonly) char _usesMultipath;
@property (readonly, copy) NSDate *_firstByteReceivedDate;
@property (readonly, copy) NSString *_interfaceName;
@property (readonly) int _privacyStance;
@property (readonly, retain) NSObject<OS_nw_establishment_report> *_establishmentReport;
@property (readonly, retain) NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
@property (readonly, copy) NSString *_proxyAddress;
@property (readonly, copy) NSNumber *_proxyPort;
@property (readonly) char _isUnlistedTracker;
@property (readonly) char _usedTFO;
@property (nonatomic) struct { double domainLookupBeginTime; double connectBeginTime; unsigned int domainLookupDuration; unsigned int connectDuration; unsigned int secureConnectionDuration; BOOL secure; } _connectionTiming;
@property (nonatomic) char _connectionTimingCached;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSURLResponse *response;
@property (readonly, copy) NSDate *fetchStartDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;
@property (readonly, copy) NSDate *secureConnectionEndDate;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *requestEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, getter=isProxyConnection) char proxyConnection;
@property (readonly, getter=isReusedConnection) char reusedConnection;
@property (readonly) long long resourceFetchType;
@property (readonly) long long countOfRequestHeaderBytesSent;
@property (readonly) long long countOfRequestBodyBytesSent;
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding;
@property (readonly) long long countOfResponseHeaderBytesReceived;
@property (readonly) long long countOfResponseBodyBytesReceived;
@property (readonly) long long countOfResponseBodyBytesAfterDecoding;
@property (readonly, copy) NSString *localAddress;
@property (readonly, copy) NSNumber *localPort;
@property (readonly, copy) NSString *remoteAddress;
@property (readonly, copy) NSNumber *remotePort;
@property (readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, getter=isCellular) char cellular;
@property (readonly, getter=isExpensive) char expensive;
@property (readonly, getter=isConstrained) char constrained;
@property (readonly, getter=isMultipath) char multipath;
@property (readonly) long long domainResolutionProtocol;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
