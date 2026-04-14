@class NSArray, NSString;
@protocol FCCoreConfiguration, FCBundleSubscriptionManagerType, FCContentContext;

@interface FCEvergreenArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    id<FCCoreConfiguration> _configuration;
    id<FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    NSString *_evergreenArticleListID;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (id)initWithContext:(id)a0 configuration:(id)a1 bundleSubscriptionManager:(id)a2;

@end
