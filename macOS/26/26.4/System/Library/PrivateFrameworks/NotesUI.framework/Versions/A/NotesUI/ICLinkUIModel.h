@class NSColor, NSString;

@interface ICLinkUIModel : ICInlineAttachmentUIModel

@property (nonatomic, readonly) NSColor *labelColor;
@property (nonatomic, readonly) NSString *paragraphStyleAttributeName;
@property (nonatomic, readonly) NSString *foregroundColorAttributeName;
@property (nonatomic, readonly) NSString *ttforegroundColorAttributeName;
@property (nonatomic, readonly) NSString *ttEmphasisAttributeName;
@property (nonatomic, readonly) NSString *ttAttributeNameDerivedAuthorHighlight;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttachment:(id)a0;
- (id)attributedStringWithSurroundingAttributes:(id)a0 formatter:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })highlightRangeForTextFindingMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)highlightingAttributedString:(id)a0 withSurroundingAttributes:(id)a1;
- (id)noteGlyphTextAttachmentWithSurroundingAttributes:(id)a0;

@end
