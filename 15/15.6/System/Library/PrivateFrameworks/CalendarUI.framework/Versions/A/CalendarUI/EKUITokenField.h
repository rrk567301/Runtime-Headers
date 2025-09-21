@class NSColor, NSString, EKUIGadget;

@interface EKUITokenField : NSTokenField <CalUIAutocompletingField>

@property (weak) EKUIGadget *gadget;
@property (retain) NSColor *tokenTextColor;
@property struct CGSize { double width; double height; } intrinsicContentSize;
@property char isExpanded;
@property char isInsideExpandableContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (id)_preferredAppearance;
- (char)acceptsFirstResponder;
- (char)allowsVibrancy;
- (char)becomeFirstResponder;
- (char)canBecomeKeyView;
- (void)effectiveAppearanceDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)objectValueAsArray;
- (void)setCalUITextFieldDelegate:(id)a0;

@end
