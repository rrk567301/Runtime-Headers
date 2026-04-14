@protocol AMSBagProtocol;

@interface AMSStoreReviewGatingController : NSObject {
    void /* unknown type, empty encoding */ ledger;
}

@property (nonatomic, readonly) id<AMSBagProtocol> bag;

- (id)initWithBag:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didPromptWithCompletionHandler:(void (^)(void))a0;
- (void)isEnabledWithCompletionHandler:(void (^)(BOOL))a0;
- (void)canPromptWithCompletionHandler:(void (^)(BOOL))a0;
- (void)didEnterForegroundWithCompletionHandler:(void (^)(void))a0;

@end
