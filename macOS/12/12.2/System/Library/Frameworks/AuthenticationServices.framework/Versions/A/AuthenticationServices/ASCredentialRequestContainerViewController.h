@class NSViewController, NSString, NSVisualEffectView;
@protocol ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate;

@interface ASCredentialRequestContainerViewController : NSViewController <ASNavigationControllerDelegate>

@property (retain, nonatomic) NSVisualEffectView *blurBackgroundView;
@property (nonatomic) struct CGSize { double width; double height; } containerContentSize;
@property (retain, nonatomic) NSViewController *rootViewController;
@property (weak, nonatomic) id<ASCredentialRequestContainerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_clearPaneDelegateForViewController:(id)a0;
- (void)setContainerContentSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;

@end
