@interface WKIntelligenceReplacementTextEffectCoordinator : NSObject <WKIntelligenceTextEffectCoordinating> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewManager;
    void /* unknown type, empty encoding */ processedRangeOffset;
    void /* unknown type, empty encoding */ contextRange;
    void /* unknown type, empty encoding */ replacementQueue;
    void /* unknown type, empty encoding */ onFlushCompletion;
}

@property (nonatomic, readonly) BOOL hasActiveEffects;

+ (long long)characterDeltaForReceivedSuggestions:(id)a0;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)flushReplacementsWithCompletionHandler:(void (^)(void))a0;
- (void)hideEffectsWithCompletionHandler:(void (^)(void))a0;
- (void)requestReplacementWithProcessedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 finished:(BOOL)a1 characterDelta:(long long)a2 operation:(void (^)(void (^)(void)))a3 completion:(void (^)(void))a4;
- (void)restoreSelectionAcceptedReplacements:(BOOL)a0 completionHandler:(void (^)(void))a1;
- (void)showEffectsWithCompletionHandler:(void (^)(void))a0;
- (void)startAnimationForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completion:(void (^)(void))a1;

@end
