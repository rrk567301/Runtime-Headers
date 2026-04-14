@protocol AMSUIEngagementTaskHostInterface, AMSUIEngagementTaskRemoteInterface;

@interface AMSUIEngagementRemoteViewController : NSRemoteViewController

@property (weak) id<AMSUIEngagementTaskHostInterface> delegate;
@property (readonly) id<AMSUIEngagementTaskRemoteInterface> remoteProxy;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
