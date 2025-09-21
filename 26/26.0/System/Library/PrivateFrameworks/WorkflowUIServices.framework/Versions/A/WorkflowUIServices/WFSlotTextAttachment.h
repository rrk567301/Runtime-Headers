@class NSColor, NSString, WFSlotIdentifier, NSHashTable, WFSlotTemplateToken, NSFont;

@interface WFSlotTextAttachment : NSTextAttachment <WFSlotTemplateTokenDelegate, NSCopying>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) WFSlotTemplateToken *token;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSFont *surroundingTextFont;
@property (copy, nonatomic) NSString *overrideVariableName;
@property (copy, nonatomic) WFSlotIdentifier *containingSlotIdentifier;
@property (nonatomic) BOOL standalone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)_textAttachmentCell;
- (id)variableName;
- (id)adjustedFont;
- (unsigned long long)currentControlState;
- (id)initWithSlotTemplateToken:(id)a0;
- (void)notifyNeedsDisplay;
- (void)templateTokenDidChange:(id)a0;

@end
