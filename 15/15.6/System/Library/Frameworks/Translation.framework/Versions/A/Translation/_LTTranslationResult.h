@class NSString, NSArray, _LTDisambiguableResult, NSLocale;

@interface _LTTranslationResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *translations;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *sourceString;
@property (copy, nonatomic) NSString *sanitizedSourceString;
@property (nonatomic) char isFinal;
@property (nonatomic) long long route;
@property (copy, nonatomic) NSArray *alignments;
@property (copy, nonatomic) _LTDisambiguableResult *disambiguableResult;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
