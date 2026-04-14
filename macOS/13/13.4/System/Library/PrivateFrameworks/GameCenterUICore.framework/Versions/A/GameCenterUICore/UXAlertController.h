@class NSArray, NSString, NSView, NSAlert;

@interface UXAlertController : UXViewController

@property (retain) NSArray *actions;
@property (retain) NSArray *textFields;
@property (retain) NSAlert *alert;
@property (copy) NSString *message;
@property (readonly) long long preferredStyle;
@property (retain) NSView *accessoryView;

+ (id)alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)addTextFieldWithConfigurationHandler:(id /* block */)a0;
- (id)createAlert;
- (void)_gkPresentYourself;
- (void)_gkAddCancelButtonWithNoAction;
- (void)_gkExecuteActionForReturnCode:(long long)a0;
- (void)_gkPresentInWindow:(id)a0;

@end
