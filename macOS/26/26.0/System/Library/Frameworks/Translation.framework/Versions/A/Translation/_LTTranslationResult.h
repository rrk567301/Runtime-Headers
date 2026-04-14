@class NSString, NSArray, _LTDisambiguableResult, NSLocale;

@interface _LTTranslationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *translations;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *sourceString;
@property (copy, nonatomic) NSString *sanitizedSourceString;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) BOOL endOfUtterance;
@property (nonatomic) long long route;
@property (copy, nonatomic) NSArray *alignments;
@property (copy, nonatomic) _LTDisambiguableResult *disambiguableResult;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
