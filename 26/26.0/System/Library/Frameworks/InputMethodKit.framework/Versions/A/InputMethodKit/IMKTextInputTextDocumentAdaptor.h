@class IMKTextDocumentTextInputAdaptor;
@protocol IMKTextDocument;

@interface IMKTextInputTextDocumentAdaptor : NSObject <IMKTextInput>

@property (readonly, nonatomic) id<IMKTextDocument> textDocument;
@property (readonly, nonatomic) IMKTextDocumentTextInputAdaptor *textDocumentAdaptor;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)bundleIdentifier;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (long long)length;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)validAttributesForMarkedText;
- (int)windowLevel;
- (BOOL)supportsUnicode;
- (id)attributesForCharacterIndex:(unsigned long long)a0 lineHeightRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0 tracking:(long long)a1 inMarkedRange:(BOOL *)a2;
- (void)overrideKeyboardWithKeyboardNamed:(id)a0;
- (void)selectInputMode:(id)a0;
- (void)setMarkedText:(id)a0 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)stringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)supportsProperty:(unsigned int)a0;
- (id)uniqueClientIdentifierString;
- (id)initWithTextDocumentToAdapt:(id)a0;

@end
