@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)description;
- (void).cxx_destruct;
- (id)icons;
- (id)text;
- (unsigned long long)maxLines;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)inlineRoundedText;
- (id)stars;

@end
