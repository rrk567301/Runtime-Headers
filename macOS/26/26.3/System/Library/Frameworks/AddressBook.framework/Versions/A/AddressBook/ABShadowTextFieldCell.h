@class NSTextView, NSAttributedString;

@interface ABShadowTextFieldCell : NSTextFieldCell {
    NSTextView *_fieldEditor;
}

@property (copy) NSAttributedString *originalPlaceholder;
@property (copy) NSAttributedString *alternatePlaceholder;
@property (nonatomic) BOOL displaysAlternatePlaceholder;
@property (getter=accessibilityIsIgnored) BOOL ignoredByAccessibility;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fieldEditorForView:(id)a0;

@end
