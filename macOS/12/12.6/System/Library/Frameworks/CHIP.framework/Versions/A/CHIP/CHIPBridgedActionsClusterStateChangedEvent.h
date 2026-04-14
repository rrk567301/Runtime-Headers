@class NSNumber;

@interface CHIPBridgedActionsClusterStateChangedEvent : NSObject

@property (retain, nonatomic) NSNumber *actionID;
@property (retain, nonatomic) NSNumber *invokeID;
@property (retain, nonatomic, getter=getNewState) NSNumber *newState;

- (id)init;
- (void).cxx_destruct;

@end
