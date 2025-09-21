@class MNLocationProviderCLParameters, MNNavigationTraceManager, MNNavigationStateManager, MNSimulationLocationProvider;

@interface MNNavigationState : NSObject

@property (readonly, weak, nonatomic) MNNavigationStateManager *stateManager;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL requiresHighMemoryThreshold;
@property (readonly, nonatomic) BOOL requiresLocationAccess;
@property (readonly, nonatomic) long long desiredLocationProviderType;
@property (readonly, nonatomic) MNLocationProviderCLParameters *clParameters;
@property (readonly, nonatomic) BOOL shouldClearStoredRoutes;
@property (readonly, nonatomic) double locationUpdateInterval;
@property (readonly, nonatomic) double suggestionUpdateFrequency;
@property (readonly, nonatomic) MNNavigationTraceManager *traceManager;
@property (readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider;

- (void)changeUserOptions:(id)a0;
- (void)postEnterState;
- (void)enterState;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)_isSelectorValidForForwarding:(SEL)a0;
- (id)initWithStateManager:(id)a0;
- (void)leaveState;
- (void)preEnterState;

@end
