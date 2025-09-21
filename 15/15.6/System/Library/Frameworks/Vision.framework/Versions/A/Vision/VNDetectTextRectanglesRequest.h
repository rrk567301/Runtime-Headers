@class NSString, NSArray;

@interface VNDetectTextRectanglesRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) char detectDiacritics;
@property (nonatomic) char minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;
@property (copy, nonatomic) NSString *additionalCharacters;
@property (nonatomic) char reportCharacterBoxes;
@property (readonly, copy) NSArray *results;

+ (void)initialize;
+ (Class)configurationClass;

- (char)_detectCreditCardTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (char)_detectTextWithRequestPerformingContext:(id)a0 requestRevision:(unsigned long long)a1 error:(id *)a2;
- (id)_futharkRecognitionLanguage;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
