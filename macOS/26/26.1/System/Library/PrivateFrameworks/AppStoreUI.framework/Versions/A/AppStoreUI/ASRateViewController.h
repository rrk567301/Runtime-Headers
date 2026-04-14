@class NSGlassEffectView, ASWriteReviewRateView, ASWriteReviewConfiguration;

@interface ASRateViewController : NSViewController {
    BOOL _useGlassDesign;
    NSGlassEffectView *_glassEffectView;
}

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (readonly, nonatomic) ASWriteReviewRateView *rateView;
@property (nonatomic) BOOL hasActiveRequest;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)loadView;
- (void).cxx_destruct;
- (void)_configureConstraints;
- (void)updateControls;
- (BOOL)_overrideSandboxForReviewPrompt;
- (void)configureDialogView;
- (void)configureDialogViewForSubmittedState;
- (id)initWithConfiguration:(id)a0 useGlassDesign:(BOOL)a1;
- (struct CGSize { double x0; double x1; })preferredSizeForConfiguration:(id)a0;

@end
