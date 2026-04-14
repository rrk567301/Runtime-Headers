@protocol AKFidoRVSServiceDelegate;

@interface AKFidoRVSRemoteViewController : NSRemoteViewController <AKFidoRVSServiceDelegate>

@property (weak, nonatomic) id<AKFidoRVSServiceDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)dismiss;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
