@class EKUIGadget;

@interface EKUIGadgetScrollView : NSScrollView

@property (weak) EKUIGadget *gadget;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;

@end
