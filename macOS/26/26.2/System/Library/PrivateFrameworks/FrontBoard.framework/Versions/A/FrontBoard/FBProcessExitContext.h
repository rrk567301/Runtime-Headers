@class FBSProcessTerminationRequest, NSString, FBProcessState, FBProcessWatchdogEventContext, NSError, RBSProcessExitContext;

@interface FBProcessExitContext : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) FBSProcessTerminationRequest *terminationRequest;
@property (retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext;
@property (copy, nonatomic) FBProcessState *stateBeforeExiting;
@property (nonatomic) long long terminationReason;
@property (readonly, nonatomic) unsigned long long exitReason;
@property (readonly, nonatomic) NSError *launchError;
@property (readonly, nonatomic) NSError *terminationError;
@property (readonly, nonatomic) RBSProcessExitContext *underlyingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForExitReason:(unsigned long long)a0;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithLaunchError:(id)a0;
- (int)terminationSignal;
- (BOOL)consideredJetsam;
- (BOOL)fairPlayFailure;
- (id)initWithUnderlyingContext:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)initWithTerminationError:(id)a0;
- (long long)exitStatus;
- (id)createError;
- (int)exitCode;
- (id)succinctDescription;
- (BOOL)exitedNormally;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end
