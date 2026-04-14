@class NSString, NSViewController;
@protocol ASCredentialRequestPaneViewControllerDelegate;

@interface ASCredentialRequestContainerViewController : NSViewController <ASNavigationControllerDelegate>

@property (readonly, nonatomic) NSViewController *rootViewController;
@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> paneDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)_clearPaneDelegateForViewController:(id)a0;
- (void)_setPaneDelegate:(id)a0 forViewController:(id)a1;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)a0;

@end
