@protocol ScreenSaverRemoteViewControllerDelegate;

@interface ScreenSaverRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<ScreenSaverRemoteViewControllerDelegate> delegate;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
