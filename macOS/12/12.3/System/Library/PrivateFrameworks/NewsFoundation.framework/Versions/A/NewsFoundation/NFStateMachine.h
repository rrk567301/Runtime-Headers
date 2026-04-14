@class NFMutexLock, NSMutableDictionary, NFStateMachineState;

@interface NFStateMachine : NSObject

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NFStateMachineState *state;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic) long long statusToken;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)addState:(id)a0;
- (void)addEvent:(id)a0;
- (void)activateIfNeeded;
- (id)initWithState:(id)a0 withOwner:(id)a1;
- (void)deactivateIfNeeded;
- (id)fireEventWithName:(id)a0 withContext:(id)a1;

@end
