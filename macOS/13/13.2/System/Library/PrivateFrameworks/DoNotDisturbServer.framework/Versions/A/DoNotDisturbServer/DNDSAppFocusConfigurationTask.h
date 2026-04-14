@class NSUUID, NSString, LNActionExecutor, LNAction;

@interface DNDSAppFocusConfigurationTask : NSObject <LNActionExecutorDelegate> {
    LNAction *_action;
    LNActionExecutor *_executor;
    id /* block */ _completion;
}

@property (readonly, nonatomic) NSUUID *taskIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)execute;
- (void)prepareWithCompletion:(id /* block */)a0;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (id)_executorCreatingIfNeeded;

@end
