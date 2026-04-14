@class NSNumber;

@interface MTRSwitchClusterShortReleaseEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousPosition;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
