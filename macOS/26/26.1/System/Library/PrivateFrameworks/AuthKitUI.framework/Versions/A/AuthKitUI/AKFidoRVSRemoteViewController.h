@protocol AKFidoRVSServiceDelegate;

@interface AKFidoRVSRemoteViewController : NSRemoteViewController <AKFidoRVSServiceDelegate>

@property (weak, nonatomic) id<AKFidoRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
