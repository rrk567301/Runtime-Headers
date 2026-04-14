@class NSString, EKUIAttendeesGadget;

@interface EKUIAttendeesControlContainer : NSView <NSAccessibilityButton>

@property (weak) EKUIAttendeesGadget *gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)keyUp:(id)a0;

@end
