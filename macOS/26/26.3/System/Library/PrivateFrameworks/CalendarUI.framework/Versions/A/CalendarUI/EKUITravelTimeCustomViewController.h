@class NSTextField, EKEvent, IGPopupWindowController, NSPopUpButton;

@interface EKUITravelTimeCustomViewController : NSViewController

@property (weak) EKEvent *event;
@property (retain) IGPopupWindowController *popup;
@property (retain) NSPopUpButton *customUnit;
@property (retain) NSTextField *customDuration;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (BOOL)showPopupOnView:(id)a0;

@end
