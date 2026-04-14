@protocol AKAuthenticationRVSServiceDelegate;

@interface AKAuthenticationRVSRemoteViewController : NSRemoteViewController <AKAuthenticationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthenticationRVSServiceDelegate> remoteViewServiceDelegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)dismiss;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;

@end
