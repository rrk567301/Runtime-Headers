@class NSString, FBSProcessWatchdogPolicy;
@protocol FBSProcessInternal;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {
    BOOL _active;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<FBSProcessInternal> process;
@property (readonly, copy, nonatomic) FBSProcessWatchdogPolicy *policy;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)activate;
- (BOOL)isActive;
- (id)succinctDescriptionBuilder;
- (void)provision:(id)a0 wasViolatedWithError:(id)a1;
- (void)deactivate;
- (void)_beginMonitoringConstraints;
- (id)initWithName:(id)a0 process:(id)a1 policy:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_stopMonitoringConstraints;
- (void)dealloc;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;

@end
