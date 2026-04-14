@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;

- (id)icons;
- (unsigned long long)maxLines;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)stars;
- (void).cxx_destruct;
- (id)inlineRoundedText;
- (id)text;
- (id)description;

@end
