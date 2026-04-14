@class NSColor, NSString, EKUIGadget;

@interface EKUITokenField : NSTokenField <CalUIAutocompletingField>

@property (weak) EKUIGadget *gadget;
@property (retain) NSColor *tokenTextColor;
@property struct CGSize { double width; double height; } intrinsicContentSize;
@property BOOL isExpanded;
@property BOOL isInsideExpandableContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (BOOL)allowsVibrancy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_preferredAppearance;
- (BOOL)acceptsFirstResponder;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)effectiveAppearanceDidChange;
- (void)setCalUITextFieldDelegate:(id)a0;
- (id)objectValueAsArray;

@end
