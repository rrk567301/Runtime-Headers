@class NSArray;

@interface MADVIDocumentRecognitionRequest : MADRequest

@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) BOOL usesLanguageDetection;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL usesFormFieldDetection;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) float minimumTextHeight;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguages:(id)a0;

@end
