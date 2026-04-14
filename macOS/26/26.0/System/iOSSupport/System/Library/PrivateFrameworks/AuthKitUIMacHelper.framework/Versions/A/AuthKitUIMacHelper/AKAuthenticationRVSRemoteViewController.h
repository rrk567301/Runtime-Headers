@protocol AKAuthenticationRVSServiceDelegate;

@interface AKAuthenticationRVSRemoteViewController : NSRemoteViewController <AKAuthenticationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthenticationRVSServiceDelegate> remoteViewServiceDelegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
