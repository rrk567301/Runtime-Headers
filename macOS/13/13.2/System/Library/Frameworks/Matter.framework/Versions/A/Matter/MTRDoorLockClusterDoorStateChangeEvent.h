@class NSNumber;

@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *doorState;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
