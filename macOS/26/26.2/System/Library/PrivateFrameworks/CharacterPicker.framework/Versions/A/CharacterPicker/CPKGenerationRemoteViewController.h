@class NSObject;

@interface CPKGenerationRemoteViewController : NSRemoteViewController

@property (nonatomic) NSObject *exportedObjectInternal;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)exportedObject;

@end
