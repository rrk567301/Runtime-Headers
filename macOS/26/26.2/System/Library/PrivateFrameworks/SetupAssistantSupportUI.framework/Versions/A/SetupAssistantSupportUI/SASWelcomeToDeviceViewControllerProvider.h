@class NSViewController;

@interface SASWelcomeToDeviceViewControllerProvider : NSObject {
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, retain) NSViewController *viewController;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (id)initWithText:(id)a0 finalTextColor:(id)a1 onAnimationCompleteHandler:(id /* block */)a2;

@end
