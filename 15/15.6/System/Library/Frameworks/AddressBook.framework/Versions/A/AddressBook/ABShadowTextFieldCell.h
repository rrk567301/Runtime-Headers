@class NSTextView, NSAttributedString;

@interface ABShadowTextFieldCell : NSTextFieldCell {
    NSTextView *_fieldEditor;
}

@property (copy) NSAttributedString *originalPlaceholder;
@property (copy) NSAttributedString *alternatePlaceholder;
@property (nonatomic) char displaysAlternatePlaceholder;
@property (getter=accessibilityIsIgnored) char ignoredByAccessibility;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)fieldEditorForView:(id)a0;

@end
