@class NSNumber;

@interface MTRBasicClusterReachableChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *reachableNewValue;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
