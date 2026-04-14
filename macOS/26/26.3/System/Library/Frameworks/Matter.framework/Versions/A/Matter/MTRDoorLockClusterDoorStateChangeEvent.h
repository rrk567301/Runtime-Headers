@class NSNumber;

@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *doorState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
