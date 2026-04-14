@class NSNumber;

@interface MTROperationalCredentialsClusterRemoveFabricParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
