@class PHAPrivateFederatedLearningRecipeOptions;

@interface PHAPrivateFederatedLearningRunner : NSObject

@property (readonly, nonatomic) PHAPrivateFederatedLearningRecipeOptions *options;

+ (id)datasetBuilderForOptions:(id)a0 error:(id *)a1;
+ (id)_firstAttachmentURLWithSuffixOfName:(id)a0 attachments:(id)a1 error:(id *)a2;
+ (id)_firstAttachmentURLWithSuffixOfName:(id)a0 attachments:(id)a1 expectedDirectory:(BOOL)a2 error:(id *)a3;
+ (id)_generateErrorWithErrorCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
+ (BOOL)_isInternalDevice;
+ (id)_mediaAnalysisImageProgressForPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)_prepareDatasetWithOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)runWithError:(id *)a0;
- (BOOL)_isValidInputDimensionForCoreMLModel:(id)a0 error:(id *)a1;
- (id)_prepareTrainingDataForBiomeStream:(id)a0 error:(id *)a1;
- (id)initWithRecipeOptions:(id)a0;
- (id)runCoreMLModelWithError:(id *)a0;

@end
