@class NSString, LNAction;
@protocol LNConnectionClientInterface;

@interface LNExecutorRequest : NSObject <LNPerformActionExecutorDelegate>

@property (retain, nonatomic) LNAction *action;
@property (readonly, nonatomic) id<LNConnectionClientInterface> executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(id /* block */)a0;
- (id)initWithAction:(id)a0 executor:(id)a1;

@end
