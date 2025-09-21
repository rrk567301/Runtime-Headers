@class NSURLRequest, NSUUID, NSURLResponse, NSDictionary, NSObject, __CFN_ConnectionMetrics;
@protocol OS_dispatch_group, OS_nw_data_transfer_report;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    char _scheduledOriginLoad;
    char _firstOnConnection;
    char _pushed;
    char _APSRelayAttempted;
    char _APSRelaySucceeded;
    int _pidForHAR;
    NSObject<OS_dispatch_group> *_tcpInfoGroup;
    long long _lastResponseHeaderSize;
    long long _lastResponseBodySize;
    long long _lastResponseBodyTransferSize;
    NSUUID *_UUID;
    NSURLRequest *_request;
    NSURLRequest *_transferredRequest;
    NSURLResponse *_cachedResponse;
    NSURLResponse *_lastResponse;
    __CFN_ConnectionMetrics *_connectionMetrics;
    long long _requestHeaderSize;
    long long _requestBodySize;
    long long _requestBodyTransferSize;
    long long _responseHeaderSize;
    long long _responseBodySize;
    long long _responseBodyTransferSize;
    double _beginTime;
    double _endTime;
    double _cacheLookupBeginTime;
    double _cacheLookupEndTime;
    double _requestBeginTime;
    double _requestEndTime;
    double _responseBeginTime;
    double _responseEndTime;
    unsigned long long _endReason;
    long long _schedulingTier;
    long long _options;
    double _reusedAfterTime;
    NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) __CFN_ConnectionMetrics *_daemon_connectionMetrics;
@property (readonly, nonatomic) long long _daemon_requestHeaderSize;
@property (readonly, nonatomic) long long _daemon_requestBodyTransferSize;
@property (readonly, nonatomic) long long _daemon_responseHeaderSize;
@property (readonly, nonatomic) long long _daemon_responseBodyTransferSize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
