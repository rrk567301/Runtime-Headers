@protocol AKPrivateEmailRVSServiceDelegate;

@interface AKPrivateEmailRVSRemoteViewController : NSRemoteViewController <AKPrivateEmailRVSServiceDelegate>

@property (weak, nonatomic) id<AKPrivateEmailRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dealloc;
- (id)serviceViewControllerInterface;
- (void)callCompletionWithPrivateEmail:(id)a0 error:(id)a1;

@end
