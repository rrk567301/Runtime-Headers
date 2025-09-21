@class NSArray;

@interface MADVIDocumentRecognitionRequest : MADRequest

@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) char usesLanguageDetection;
@property (nonatomic) char usesLanguageCorrection;
@property (nonatomic) char usesFormFieldDetection;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) float minimumTextHeight;

+ (char)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguages:(id)a0;

@end
