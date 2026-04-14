@class NSButton, NSPopover, UXView;

@interface KHSettingsPanelController : UXViewController

@property (retain) NSButton *okButton;
@property (retain) NSButton *cancelButton;
@property (weak, nonatomic) UXView *settingsView;
@property (retain) NSPopover *popover;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
