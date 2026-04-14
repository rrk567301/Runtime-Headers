@class NSMapTable, NSDictionary, NSTextRange, NSAttributedString, NSMutableArray;

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    long long _resolvedBaseDirection;
    long long _fallbackBaseDirection;
    const char *_bidiLevels;
    NSMutableArray *_textLayoutFragments;
    NSMapTable *_textElementLocationTable;
    unsigned char _containsTextAttachments;
}

@property (copy) NSDictionary *attributes;
@property BOOL isBeginningOfParagraph;
@property BOOL isEndOfParagraph;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (id)attributedString;
- (id)locationForCharacterIndex:(long long)a0 dataSourceLocationsOnly:(BOOL)a1 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (void)setAttributedString:(id)a0;
- (void)setElementRange:(id)a0;
- (void)_setContainsTextAttachments:(BOOL)a0;
- (void)dealloc;
- (void)_setElementTextLocation:(id)a0 forCharacterIndex:(unsigned long long)a1;
- (void)setParagraphContentRange:(id)a0;
- (id)_textElementLocationForCharacterIndex:(unsigned long long)a0;
- (id)init;
- (id)anchoredTextAttachments;
- (void)synchronizeDocumentRange;
- (id)paragraphSeparatorRange;
- (id)paragraphRange;
- (id)description;
- (const char *)_bidiLevelsForFallbackWritingDirection:(long long)a0 resolvedBaseWritingDirectionPointer:(out long long *)a1;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)locationForCharacterIndex:(long long)a0 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithTextContentManager:(id)a0;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithTextAttachment:(id)a0 attributes:(id)a1;
- (id)paragraphContentRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(id)a0 allowsTrailingEdge:(BOOL)a1;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)a0;
- (BOOL)_containsTextAttachments;
- (void)enumerateSubstringsFromLocation:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (void)setParagraphSeparatorRange:(id)a0;

@end
