@class NSArray;
@protocol FCCoreConfiguration, FCContentVariantProviding, FCContentContext;

@interface FCGlobalCuratedESLArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    id<FCCoreConfiguration> _configuration;
    id<FCContentVariantProviding> _contentVariantProvider;
    NSArray *_evergreenArticleListIDs;
}

@property (copy, nonatomic) id /* block */ feedItemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (void)prepareOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)performOperation;
- (id)init;
- (id)initWithContext:(id)a0 configuration:(id)a1 contentVariantProvider:(id)a2;

@end
