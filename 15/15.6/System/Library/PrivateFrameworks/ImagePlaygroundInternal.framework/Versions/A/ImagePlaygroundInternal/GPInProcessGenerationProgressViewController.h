@interface GPInProcessGenerationProgressViewController : NSViewController {
    void /* unknown type, empty encoding */ generationViewController;
    void /* unknown type, empty encoding */ viewModel;
}

@property (class, nonatomic, readonly) char available;

@property (nonatomic) char isAnimating;
@property (nonatomic) char isShowingError;
@property (nonatomic) float rampSize;
@property (nonatomic) void /* unknown type, empty encoding */ progress;
@property (nonatomic) void /* unknown type, empty encoding */ transitionToImageDuration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)transitionToGeneratingState;
- (void)transitionToFinalImage;
- (void)transitionToFinalImage:(id)a0;

@end
