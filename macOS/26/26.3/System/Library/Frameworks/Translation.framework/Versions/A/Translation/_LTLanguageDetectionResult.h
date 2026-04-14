@class NSDictionary, NSLocale;

@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isConfident;
@property (copy, nonatomic) NSLocale *dominantLanguage;
@property (copy, nonatomic) NSDictionary *confidences;
@property (nonatomic) BOOL isFinal;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
