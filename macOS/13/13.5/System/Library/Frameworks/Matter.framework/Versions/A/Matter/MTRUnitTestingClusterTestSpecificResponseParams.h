@class NSNumber;

@interface MTRUnitTestingClusterTestSpecificResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *returnValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
