@class NSCountedSet, NSArray, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *dominantLocale;
@property (retain, nonatomic) NSCountedSet *localeDetectionCount;
@property (retain, nonatomic) NSCountedSet *unsupportedLanguageCounts;
@property (copy, nonatomic) NSArray *lowConfidenceLocales;
@property (readonly, nonatomic) NSLocale *dominantUnsupportedLocale;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
