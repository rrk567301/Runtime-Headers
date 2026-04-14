@protocol AMSBagProtocol;

@interface AMSStoreReviewGatingController : NSObject {
    void /* unknown type, empty encoding */ ledger;
}

@property (nonatomic, readonly) id<AMSBagProtocol> bag;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)canPromptWithCompletionHandler:(void (^)(BOOL))a0;
- (void)didPromptWithCompletionHandler:(void (^)(void))a0;
- (void)isEnabledWithCompletionHandler:(void (^)(BOOL))a0;
- (void)didEnterForegroundWithCompletionHandler:(void (^)(void))a0;

@end
