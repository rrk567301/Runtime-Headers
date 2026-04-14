@class NSNumber, MTRTestClusterClusterSimpleStruct;

@interface MTRTestClusterClusterSimpleStructEchoRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRTestClusterClusterSimpleStruct *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
