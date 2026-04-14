@protocol HomepageHostViewControllerDelegate;

@interface HomepageHostViewController : NSRemoteViewController <HomepageHostViewController>

@property (weak, nonatomic) id<HomepageHostViewControllerDelegate> delegate;

- (id)exportedInterface;
- (void)scheduleBlock:(id /* block */)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)tryApplyingHomepageURL:(id)a0 sandboxExtensionToken:(id)a1 completionHandler:(id /* block */)a2;

@end
