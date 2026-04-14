@class NSNumber;

@interface CHIPBridgedActionsClusterActionFailedEvent : NSObject

@property (retain, nonatomic) NSNumber *actionID;
@property (retain, nonatomic) NSNumber *invokeID;
@property (retain, nonatomic, getter=getNewState) NSNumber *newState;
@property (retain, nonatomic) NSNumber *error;

- (id)init;
- (void).cxx_destruct;

@end
