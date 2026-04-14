@class NSNumber, NSString;

@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *intent;
@property (copy, nonatomic) NSNumber *requestedProtocol;
@property (copy, nonatomic) NSString *transferFileDesignator;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
