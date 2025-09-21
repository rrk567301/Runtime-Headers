@class NSString, EKUIGadget;

@interface EKUIShareeControlContainer : NSView <NSAccessibilityButton>

@property (weak) EKUIGadget *gadget;
@property char shouldDrawSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (char)isAccessibilityElement;
- (void)keyUp:(id)a0;

@end
