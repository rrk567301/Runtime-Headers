@class ICTTTextContentStorage, NSTextAttachment, NSTextParagraph;

@interface ICTextLayoutFragment : NSTextLayoutFragment

@property (readonly, nonatomic) NSTextAttachment *textAttachment;
@property (readonly, nonatomic) NSTextParagraph *textParagraph;
@property (readonly, nonatomic) ICTTTextContentStorage *textContentStorage;

- (id)initWithTextElement:(id)a0 range:(id)a1;
- (double)leadingPadding;
- (double)bottomMargin;
- (double)trailingPadding;
- (double)topMargin;
- (double)marginForTop:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeInTextStorage:(id)a0;

@end
