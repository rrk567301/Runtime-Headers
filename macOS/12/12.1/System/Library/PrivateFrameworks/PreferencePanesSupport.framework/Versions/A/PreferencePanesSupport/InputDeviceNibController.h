@class NSString, NSView, InputDeviceController, NSButton;

@interface InputDeviceNibController : NSObject

@property (readonly) NSView *contentView;
@property (readonly) NSString *nibFileName;
@property (readonly) NSButton *setupBTButton;
@property (readonly) NSButton *setupBTBackButton;
@property (readonly) InputDeviceController *controller;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateButtons;
- (void)awakeFromNib;
- (void)updateDevice:(id)a0;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)_btAvailabilityDidChangeNotification:(id)a0;
- (void)willSwitchOut;
- (id)nibFileName;
- (id)fieldEditorForObject:(id)a0;

@end
