@class NSString;
@protocol QLRemoteViewControllerDelegate;

@interface QLRemoteViewController : NSRemoteViewController

@property (copy) NSString *serviceName;
@property (copy) NSString *serviceViewControllerClass;
@property (weak) id<QLRemoteViewControllerDelegate> delegate;

+ (BOOL)inhibitFirstResponder;
+ (void)connectToUIServiceViewControllerWithServiceName:(id)a0 serviceViewControllerClass:(id)a1 completion:(id /* block */)a2;
+ (void)warmUpServiceName:(id)a0 withViewControllerClassNamed:(id)a1;

- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)doubleClickOnPreviewContent;
- (void)updateFullScreenFromMagnification:(double)a0;

@end
