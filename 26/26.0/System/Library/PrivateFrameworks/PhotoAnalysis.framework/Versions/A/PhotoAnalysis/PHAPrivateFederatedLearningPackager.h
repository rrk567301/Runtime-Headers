@interface PHAPrivateFederatedLearningPackager : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierSmallRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyIdentifierLargeRange;

- (id)_flattenTrainingResults:(id)a0;
- (id)_generateErrorWithErrorCode:(long long)a0 errorMessage:(id)a1 underlyingError:(id)a2;
- (id)dataPackageFromTrainingResults:(id)a0 error:(id *)a1;

@end
