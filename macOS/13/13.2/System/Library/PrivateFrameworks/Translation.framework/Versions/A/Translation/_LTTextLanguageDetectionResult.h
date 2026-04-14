@class NSCountedSet, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *dominantLocale;
@property (readonly, copy, nonatomic) NSCountedSet *localeDetectionCount;
@property (readonly, copy, nonatomic) NSCountedSet *unsupportedLanguageCounts;

+ (void)sendAnalytics:(id)a0 isSupported:(BOOL)a1;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectedLocales:(id)a0 unknownLanguages:(id)a1;
- (id)initWithDetectionCounts:(id)a0 availableLocales:(id)a1;
- (id)initWithScorer:(id)a0;

@end
