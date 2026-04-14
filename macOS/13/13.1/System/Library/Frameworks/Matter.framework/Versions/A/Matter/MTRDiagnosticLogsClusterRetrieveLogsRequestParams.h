@class NSNumber, NSData;

@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *intent;
@property (copy, nonatomic) NSNumber *requestedProtocol;
@property (copy, nonatomic) NSData *transferFileDesignator;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
