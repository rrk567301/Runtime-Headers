@protocol ScreenSaverRemoteViewControllerDelegate;

@interface ScreenSaverRemoteViewController : NSRemoteViewController

@property (weak, nonatomic) id<ScreenSaverRemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
