@protocol AKAuthorizationRVSServiceDelegate;

@interface AKAuthorizationRVSRemoteViewController : NSRemoteViewController <AKAuthorizationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthorizationRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)callCompletionWithAuthorization:(id)a0 error:(id)a1;

@end
