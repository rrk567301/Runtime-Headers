@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton

@property (weak) EKUIAlarmGadget *gadget;

- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;

@end
