@class NSString, EKUIGadget;

@interface EKUIShareeControlContainer : NSView <NSAccessibilityButton>

@property (weak) EKUIGadget *gadget;
@property BOOL shouldDrawSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)keyUp:(id)a0;

@end
