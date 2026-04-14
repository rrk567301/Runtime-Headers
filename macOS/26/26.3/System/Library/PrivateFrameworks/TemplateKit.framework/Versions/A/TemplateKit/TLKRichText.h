@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)icons;
- (id)description;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)stars;
- (id)inlineRoundedText;
- (id)text;
- (void).cxx_destruct;
- (unsigned long long)maxLines;

@end
