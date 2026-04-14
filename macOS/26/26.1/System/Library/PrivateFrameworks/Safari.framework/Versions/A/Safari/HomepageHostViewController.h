@protocol HomepageHostViewControllerDelegate;

@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>

@property (weak, nonatomic) id<HomepageHostViewControllerDelegate> delegate;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)scheduleBlock:(id /* block */)a0;
- (id)serviceViewControllerInterface;
- (void)tryApplyingHomepageURL:(id)a0 sandboxExtensionToken:(id)a1 completionHandler:(id /* block */)a2;

@end
