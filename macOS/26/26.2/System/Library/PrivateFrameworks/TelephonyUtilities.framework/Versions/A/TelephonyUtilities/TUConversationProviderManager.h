@protocol TUConversationProviderManagerDataSource;

@interface TUConversationProviderManager : NSObject

@property (readonly, nonatomic) id<TUConversationProviderManagerDataSource> dataSource;

- (void)revokePseudonymHandle:(id)a0 forConversationProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)doesHandle:(id)a0 correspondToConversationProvider:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)conversationProviderForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)renewPseudonymHandle:(id)a0 forConversationProvider:(id)a1 expirationDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerForCallbacksForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)generatePseudonymHandleForConversationProvider:(id)a0 expiryDuration:(double)a1 URI:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)registerConversationProviderForConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;

@end
