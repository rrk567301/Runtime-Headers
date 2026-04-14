@class SMFDEManagementViewController, NSString;

@interface SMFDETableDelegate : IASCommonViewBasedTableDelegate

@property SMFDEManagementViewController *fdeManagementViewController;
@property (readonly) NSString *passwordButtonLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)pressedPasswordButton:(id)a0;

@end
