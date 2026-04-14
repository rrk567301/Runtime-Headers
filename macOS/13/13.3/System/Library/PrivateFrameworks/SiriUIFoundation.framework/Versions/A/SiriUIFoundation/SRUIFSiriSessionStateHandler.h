@class NSString, SRUIFStateMachine;
@protocol SRUIFSiriSessionStateHandlerDelegate;

@interface SRUIFSiriSessionStateHandler : NSObject <SRUIFStateMachineDelegate> {
    SRUIFStateMachine *_stateMachine;
    unsigned long long _thinkingIntervalID;
}

@property (weak, nonatomic) id<SRUIFSiriSessionStateHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)state;
- (id)initWithDelegate:(id)a0;
- (id)_stateMachine;
- (void)performTransitionForEvent:(long long)a0;
- (id)stateMachine:(id)a0 descriptionForEvent:(long long)a1;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2 eventTimeStamp:(double)a3;
- (void)performTransitionForEvent:(long long)a0 eventTimeStamp:(double)a1;

@end
