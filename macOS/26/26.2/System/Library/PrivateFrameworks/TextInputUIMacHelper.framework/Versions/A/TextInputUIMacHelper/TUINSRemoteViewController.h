@interface TUINSRemoteViewController : NSRemoteViewController

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)exportedObject;

@end
