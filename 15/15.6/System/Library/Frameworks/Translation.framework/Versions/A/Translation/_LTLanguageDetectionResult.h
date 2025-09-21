@class NSDictionary, NSLocale;

@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isConfident;
@property (copy, nonatomic) NSLocale *dominantLanguage;
@property (copy, nonatomic) NSDictionary *confidences;
@property (nonatomic) char isFinal;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
