@class NSString;

@interface TLKFormattedText : TLKFormattedTextItem

@property (nonatomic) long long verticalTextAlignment;
@property (nonatomic) long long encapsulationStyle;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) unsigned long long maxLines;

+ (id)formattedTextWithString:(id)a0;

- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)description;

@end
