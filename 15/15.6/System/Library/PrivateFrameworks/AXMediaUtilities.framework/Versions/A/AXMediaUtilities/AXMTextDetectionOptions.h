@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) char usesLanguageCorrection;
@property (retain, nonatomic) NSArray *textDetectionLocales;
@property (nonatomic) unsigned long long postProcessingOptions;
@property (readonly, nonatomic) char shouldApplySemanticTextFiltering;

+ (id)defaultOptions;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
