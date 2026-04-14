@class NSNumber;

@interface MTRSwitchClusterSwitchLatchedEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
