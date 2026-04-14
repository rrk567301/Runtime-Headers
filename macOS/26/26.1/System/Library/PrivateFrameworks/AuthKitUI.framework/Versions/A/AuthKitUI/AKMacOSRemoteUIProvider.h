@class AKAppleIDServerUIContextController, NSHTTPURLResponse;

@interface AKMacOSRemoteUIProvider : NSObject

@property (nonatomic, readonly) AKAppleIDServerUIContextController *contextController;
@property (nonatomic, retain) NSHTTPURLResponse *deferredResponse;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContextController:(id)a0;
- (id)remoteUIViewWithURL:(id)a0;
- (id)remoteUIViewWithURL:(id)a0 initialBackButtonHandler:(id /* block */)a1;

@end
