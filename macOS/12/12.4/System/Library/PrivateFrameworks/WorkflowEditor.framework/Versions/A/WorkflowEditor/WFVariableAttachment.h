@class NSColor, NSString, WFVariableAttachmentCell, WFVariable, NSFont;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>

@property (retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell;
@property (readonly, nonatomic) WFVariable *variable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSFont *surroundingTextFont;
@property (copy, nonatomic) NSString *overrideVariableName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)attachmentCell;
- (id)initWithVariable:(id)a0;
- (void)variableDidChange:(id)a0;

@end
