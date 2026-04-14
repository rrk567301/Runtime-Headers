@class AMSecurityHelperWindowController;

@interface AutomatorSecurityHelperHostViewController : NSRemoteViewController <AutomatorSecurityHelperHostViewController>

@property (weak, nonatomic) AMSecurityHelperWindowController *sheetController;

- (id)exportedInterface;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)hostCloseWindowWithReply:(id /* block */)a0;

@end
