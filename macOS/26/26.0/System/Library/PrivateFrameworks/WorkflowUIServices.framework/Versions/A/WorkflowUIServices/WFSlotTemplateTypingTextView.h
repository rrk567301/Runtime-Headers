@class NSString, NSAttributedString, NSFont;
@protocol WFSlotTemplateTypingTextViewDelegate;

@interface WFSlotTemplateTypingTextView : WFAppKitAutocompleteTextView <WFSlotTemplateTextEntry>

@property (weak) id<WFSlotTemplateTypingTextViewDelegate> delegate;
@property (nonatomic) double topTextContainerInset;
@property (retain, nonatomic) NSFont *emojiOverrideFont;
@property (nonatomic) BOOL typingAllowsMultipleLines;
@property (nonatomic) BOOL clearsZeroWhenTyping;
@property (readonly, nonatomic) NSFont *font;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unionRectInVisibleSelectedRange;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } documentVisibleRect;
@property (readonly) BOOL supportsAdaptiveImageGlyph;
@property (copy) NSString *contentType;

- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)paste:(id)a0;
- (void)insertAttributedText:(id)a0;
- (BOOL)isFlipped;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)insertNewline:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)moveDown:(id)a0;
- (void)wf_applyEmojiOverrideFont;
- (void)wf_replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedText:(id)a1;

@end
