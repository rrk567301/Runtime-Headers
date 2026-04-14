@class NSNumber, NSData;

@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *timeSinceBoot;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
