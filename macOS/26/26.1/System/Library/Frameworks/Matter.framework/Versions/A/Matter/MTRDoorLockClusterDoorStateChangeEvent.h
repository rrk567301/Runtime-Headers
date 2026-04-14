@class NSNumber;

@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *doorState;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
