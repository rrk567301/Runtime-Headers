@class MTRUnitTestingClusterNestedStruct, NSNumber;

@interface MTRUnitTestingClusterTestNestedStructArgumentRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRUnitTestingClusterNestedStruct *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
