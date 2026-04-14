@protocol AKAuthorizationRVSServiceDelegate;

@interface AKAuthorizationRVSRemoteViewController : NSRemoteViewController <AKAuthorizationRVSServiceDelegate>

@property (weak, nonatomic) id<AKAuthorizationRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;
- (void)callCompletionWithAuthorization:(id)a0 error:(id)a1;

@end
