@class NSCountedSet, NSArray, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *dominantLocale;
@property (retain, nonatomic) NSCountedSet *localeDetectionCount;
@property (retain, nonatomic) NSCountedSet *unsupportedLanguageCounts;
@property (copy, nonatomic) NSArray *lowConfidenceLocales;
@property (readonly, nonatomic) NSLocale *dominantUnsupportedLocale;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
