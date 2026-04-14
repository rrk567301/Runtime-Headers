@class NSArray;
@protocol FCContentVariantProviding, FCContentContext;

@interface FCNotificationPoolOperation : FCOperation {
    id<FCContentContext> _context;
    id<FCContentVariantProviding> _contentVariantProvider;
    NSArray *_resultNotificationItems;
}

@property (copy, nonatomic) id /* block */ itemHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 contentVariantProvider:(id)a1;

@end
