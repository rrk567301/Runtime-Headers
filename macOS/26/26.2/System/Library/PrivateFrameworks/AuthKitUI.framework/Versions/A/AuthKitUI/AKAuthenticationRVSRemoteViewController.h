@protocol AKAuthenticationRVSServiceDelegate;

@interface AKAuthenticationRVSRemoteViewController : NSRemoteViewController <AKAuthenticationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthenticationRVSServiceDelegate> remoteViewServiceDelegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismiss;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
