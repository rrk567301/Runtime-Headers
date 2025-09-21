@protocol AKPrivateEmailRVSServiceDelegate;

@interface AKPrivateEmailRVSRemoteViewController : NSRemoteViewController <AKPrivateEmailRVSServiceDelegate>

@property (weak, nonatomic) id<AKPrivateEmailRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)callCompletionWithPrivateEmail:(id)a0 error:(id)a1;

@end
