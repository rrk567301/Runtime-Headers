@class NSArray;

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems;
@property (readonly) char hasContent;
@property (readonly) char hasOnlyImage;

- (id)description;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)maxLines;
- (id)icons;
- (id)filterItemsByType:(unsigned long long)a0;
- (id)inlineRoundedText;
- (id)stars;

@end
