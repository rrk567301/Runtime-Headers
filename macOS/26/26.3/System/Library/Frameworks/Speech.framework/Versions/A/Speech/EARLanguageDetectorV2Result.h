@class NSDictionary, NSString;

@interface EARLanguageDetectorV2Result : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *confidences;
@property (nonatomic) unsigned long long detectedLangauge;
@property (copy, nonatomic) NSString *dominantLocale;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLanguageDetectorV2Result:(id)a0;

@end
