@class NSData;

@interface NSSecureTextFieldCell : NSTextFieldCell {
    BOOL _echosBullets;
}

@property (getter=isKernelSecureMode) BOOL kernelSecureMode;
@property (readonly) NSData *passwordSessionValue;
@property BOOL echosBullets;

+ (void)initialize;
+ (id)_sharedSecureFieldEditor;

- (id)initWithCoder:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityValueAttribute;
- (id)initTextCell:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)wantsUpdateLayerInView:(id)a0;
- (id)setUpFieldEditorAttributes:(id)a0;
- (void)editWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 event:(id)a4;
- (void)selectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 editor:(id)a2 delegate:(id)a3 start:(long long)a4 length:(long long)a5;
- (id)fieldEditorForView:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textView:(id)a0 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (unsigned short)_bulletCharacter;
- (id)_bulletStringForString:(id)a0;
- (void)_drawForegroundOfTextLayer;
- (void)_setBulletCharacter:(unsigned short)a0;
- (const void *)_securePromptSession;
- (void)setKernelSecureMode:(BOOL)a0;
- (id)passwordSessionValue;
- (BOOL)validatePasswordSessionValue:(id)a0;
- (id)accessibilityValueDescriptionAttribute;
- (BOOL)accessibilityIsValueDescriptionAttributeSettable;

@end
