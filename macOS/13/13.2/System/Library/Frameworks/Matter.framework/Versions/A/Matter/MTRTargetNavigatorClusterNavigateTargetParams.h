@class NSNumber, NSString;

@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *target;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
