@class NSView, NSAlert;

@interface _NSAlertPanel : NSPanel

@property (weak) NSView *clientInitialFirstResponder;
@property (weak) NSView *fallbackInitialFirstResponder;
@property (weak) NSAlert *alert;

- (void).cxx_destruct;
- (unsigned long long)_automaticApplicationTerminationBehaviorWhenModal;
- (void)_dismissModalForTerminate;
- (BOOL)_isAlertWindow;
- (void)_selectFirstKeyView;
- (void)_setAlertWindow:(BOOL)a0;
- (BOOL)_wantsFocusSystem;
- (BOOL)_wantsGameControllerNavigationEvents;
- (void)setInitialFirstResponder:(id)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (unsigned long long)styleMask;

@end
