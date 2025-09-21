@interface GPInProcessGenerationProgressViewController : NSViewController {
    void /* unknown type, empty encoding */ generationViewController;
    void /* unknown type, empty encoding */ viewModel;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isShowingError;
@property (nonatomic) float rampSize;
@property (nonatomic) double transitionToImageDuration;
@property (nonatomic) float progress;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)transitionToGeneratingState;
- (void)transitionToFinalImage;
- (void)transitionToFinalImage:(id)a0;

@end
