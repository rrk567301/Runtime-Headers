@class NSCountedSet, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *dominantLocale;
@property (retain, nonatomic) NSCountedSet *localeDetectionCount;
@property (retain, nonatomic) NSCountedSet *unsupportedLanguageCounts;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
