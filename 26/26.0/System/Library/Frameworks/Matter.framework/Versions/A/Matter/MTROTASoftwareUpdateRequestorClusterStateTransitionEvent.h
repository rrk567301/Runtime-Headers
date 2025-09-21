@class NSNumber;

@interface MTROTASoftwareUpdateRequestorClusterStateTransitionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousState;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;
@property (copy, nonatomic) NSNumber *reason;
@property (copy, nonatomic) NSNumber *targetSoftwareVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
