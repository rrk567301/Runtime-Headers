@class NSArray, NSNumber;

@interface MTRUnitTestingClusterTestListStructArgumentRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
