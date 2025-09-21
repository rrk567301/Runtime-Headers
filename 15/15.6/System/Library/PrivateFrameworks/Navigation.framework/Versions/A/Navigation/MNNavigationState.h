@class MNLocationProviderCLParameters, MNNavigationTraceManager, MNNavigationStateManager, MNSimulationLocationProvider;

@interface MNNavigationState : NSObject

@property (readonly, weak, nonatomic) MNNavigationStateManager *stateManager;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) char requiresHighMemoryThreshold;
@property (readonly, nonatomic) char requiresLocationAccess;
@property (readonly, nonatomic) unsigned long long desiredLocationProviderType;
@property (readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property (readonly, nonatomic) char shouldClearStoredRoutes;
@property (readonly, nonatomic) double locationUpdateInterval;
@property (readonly, nonatomic) double suggestionUpdateFrequency;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property (readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)enterState;
- (char)_isSelectorValidForForwarding:(SEL)a0;
- (void)changeUserOptions:(id)a0;
- (id)initWithStateManager:(id)a0;
- (void)leaveState;
- (void)postEnterState;
- (void)preEnterState;

@end
