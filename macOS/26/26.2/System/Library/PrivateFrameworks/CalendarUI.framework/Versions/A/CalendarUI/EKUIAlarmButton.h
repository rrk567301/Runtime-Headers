@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton

@property (weak) EKUIAlarmGadget *gadget;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void).cxx_destruct;

@end
