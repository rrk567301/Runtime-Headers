@class NSString, FBSProcessExecutionPolicy, FBSProcessAssertion, FBSProcessWatchdog;
@protocol FBSSceneHandle, FBSProcess;

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding> {
    id /* block */ _errorHandler;
    id<FBSProcess> _process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<FBSSceneHandle> scene;
@property (copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isValid;
- (void)invalidate;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)open;
- (id /* block */)errorHandler;
- (void)close;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 scene:(id)a1 executionPolicy:(id)a2;

@end
