@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)text;
- (id)icons;
- (void).cxx_destruct;
- (id)inlineRoundedText;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)description;
- (id)stars;
- (unsigned long long)maxLines;

@end
