@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton

@property (weak) EKUIAlarmGadget *gadget;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;

@end
