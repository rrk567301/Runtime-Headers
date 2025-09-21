@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)icons;
- (id)filterItemsByType:(unsigned long long)a0;
- (unsigned long long)maxLines;
- (id)text;
- (id)description;
- (id)inlineRoundedText;
- (id)stars;
- (void).cxx_destruct;

@end
