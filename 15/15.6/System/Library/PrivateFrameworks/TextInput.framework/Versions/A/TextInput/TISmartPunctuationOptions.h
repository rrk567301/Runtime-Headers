@class NSString, NSLocale;

@interface TISmartPunctuationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *leftSingleQuote;
@property (copy, nonatomic) NSString *rightSingleQuote;
@property (copy, nonatomic) NSString *apostrophe;
@property (copy, nonatomic) NSString *leftDoubleQuote;
@property (copy, nonatomic) NSString *rightDoubleQuote;
@property (nonatomic) char usesDirectionalQuotes;
@property (readonly, nonatomic) NSLocale *locale;

+ (id)smartPunctuationOptionsForLocale:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0;
- (void)_generateDataFromLocale;

@end
