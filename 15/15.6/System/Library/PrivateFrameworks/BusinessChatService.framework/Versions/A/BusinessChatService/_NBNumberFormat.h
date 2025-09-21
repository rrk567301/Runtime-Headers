@class NSString, NSArray;

@interface _NBNumberFormat : NSObject

@property (retain, nonatomic) NSString *pattern;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *leadingDigitsPatterns;
@property (retain, nonatomic) NSString *nationalPrefixFormattingRule;
@property (nonatomic) char nationalPrefixOptionalWhenFormatting;
@property (retain, nonatomic) NSString *domesticCarrierCodeFormattingRule;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;
- (id)initWithPattern:(id)a0 withFormat:(id)a1 withLeadingDigitsPatterns:(id)a2 withNationalPrefixFormattingRule:(id)a3 whenFormatting:(char)a4 withDomesticCarrierCodeFormattingRule:(id)a5;

@end
