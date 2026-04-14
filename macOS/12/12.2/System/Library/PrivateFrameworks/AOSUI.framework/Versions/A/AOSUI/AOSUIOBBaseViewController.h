@class OBTemplateView, AOSUIAccountContactBaseViewModel, AOSUIOBTemplateContainerViewController;
@protocol AOSUIOBBaseViewControllerDelegate;

@interface AOSUIOBBaseViewController : NSViewController {
    AOSUIAccountContactBaseViewModel *_currentViewModel;
}

@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) AOSUIOBTemplateContainerViewController *containerView;
@property (weak, nonatomic) id<AOSUIOBBaseViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithViewModel:(id)a0;
- (void)updateViewContollerWithViewModel:(id)a0;
- (void)firstButtonPressed;
- (void)secondButtonPressed;
- (void)linkButtonPressed;
- (void)templateLinkButtonPressed;
- (id)_setupContainerViewWithViewModel:(id)a0;
- (void)_setupContainerView;
- (void)_setupTemplateView;

@end
