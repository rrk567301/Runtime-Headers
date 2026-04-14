@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject {
    AFSafetyBlock *_safetyBlock;
}

- (id)initWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)releaseAssertion;

@end
