@class NSNumber;

@interface MTROtaSoftwareUpdateRequestorClusterStateTransitionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousState;
@property (copy, nonatomic, getter=getNewState) NSNumber *newState;
@property (copy, nonatomic) NSNumber *reason;
@property (copy, nonatomic) NSNumber *targetSoftwareVersion;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
