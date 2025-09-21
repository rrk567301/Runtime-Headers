@interface VRXTurnBasedInstrumentationEvent : VRXInstrumentationEvent

@property (readonly, nonatomic) char requiresNewTurn;

- (void)emitWithTurnIdentifier:(id)a0;
- (void)emitWithTurnIdentifier:(id)a0 aceViewId:(id)a1;

@end
