@class NSDictionary, NSTextRange, NSAttributedString, NSMutableArray;

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    long long _resolvedBaseDirection;
    long long _fallbackBaseDirection;
    NSMutableArray *_textLayoutFragments;
    unsigned char _containsTextAttachments;
}

@property (copy) NSDictionary *attributes;
@property BOOL isBeginningOfParagraph;
@property BOOL isEndOfParagraph;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setAttributedString:(id)a0;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)paragraphSeparatorRange;
- (void)enumerateSubstringsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)attributedString;
- (id)paragraphRange;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTextContentManager:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (id)paragraphContentRange;
- (void)setParagraphContentRange:(id)a0;
- (void)setParagraphSeparatorRange:(id)a0;
- (id)locationForOffset:(long long)a0 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })offsetRangeForLocation:(id)a0;
- (void)synchronizeDocumentRange;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)a0;
- (id)initWithTextAttachment:(id)a0 attributes:(id)a1;
- (BOOL)_containsTextAttachments;
- (void)_setContainsTextAttachments:(BOOL)a0;

@end
