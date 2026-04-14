@interface SummarizationAnimationCoordinator : NSObject {
    void /* unknown type, empty encoding */ activeEffects;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewSource;
    void /* unknown type, empty encoding */ effectView;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL contentBoundsUpdating;

- (void).cxx_destruct;
- (id)init;
- (void)endAnimations;
- (void)beginPlaceholderReplacement;
- (void)startPlaceholderAnimation;

@end
