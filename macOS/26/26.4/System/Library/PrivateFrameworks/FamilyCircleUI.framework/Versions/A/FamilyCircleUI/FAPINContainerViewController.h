@class STPINRemoteViewController;
@protocol FAPINContainerViewControllerDelegate;

@interface FAPINContainerViewController : NSViewController

@property (retain) STPINRemoteViewController *pinViewController;
@property (weak) id<FAPINContainerViewControllerDelegate> delegate;

- (void)loadView;
- (void).cxx_destruct;
- (void)cancelButtonClicked:(id)a0;
- (id)initWithPINViewController:(id)a0 delegate:(id)a1;

@end
