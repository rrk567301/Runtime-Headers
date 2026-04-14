@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (unsigned long long)maxLines;
- (id)icons;
- (id)inlineRoundedText;
- (id)text;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)description;
- (id)stars;
- (void).cxx_destruct;

@end
