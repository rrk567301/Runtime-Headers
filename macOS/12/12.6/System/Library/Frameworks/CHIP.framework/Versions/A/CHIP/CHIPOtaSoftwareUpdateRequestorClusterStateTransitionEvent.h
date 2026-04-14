@class NSNumber;

@interface CHIPOtaSoftwareUpdateRequestorClusterStateTransitionEvent : NSObject

@property (retain, nonatomic) NSNumber *previousState;
@property (retain, nonatomic, getter=getNewState) NSNumber *newState;
@property (retain, nonatomic) NSNumber *reason;
@property (retain, nonatomic) NSNumber *targetSoftwareVersion;

- (id)init;
- (void).cxx_destruct;

@end
