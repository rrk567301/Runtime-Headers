@class NSString;

@interface LNBasicActionDelegate : NSObject <LNActionExecutorDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didCompleteExecutionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;

@end
