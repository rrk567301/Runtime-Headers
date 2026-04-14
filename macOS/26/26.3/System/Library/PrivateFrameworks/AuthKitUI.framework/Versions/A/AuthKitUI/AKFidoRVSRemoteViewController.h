@protocol AKFidoRVSServiceDelegate;

@interface AKFidoRVSRemoteViewController : NSRemoteViewController <AKFidoRVSServiceDelegate>

@property (weak, nonatomic) id<AKFidoRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)dismiss;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)serviceViewControllerInterface;

@end
