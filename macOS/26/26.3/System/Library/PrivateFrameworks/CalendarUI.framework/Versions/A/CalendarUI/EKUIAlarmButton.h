@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton

@property (weak) EKUIAlarmGadget *gadget;

- (BOOL)resignFirstResponder;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;

@end
