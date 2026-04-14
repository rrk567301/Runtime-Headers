@class NSNumber;

@interface MTRBooleanStateClusterStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *stateValue;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
