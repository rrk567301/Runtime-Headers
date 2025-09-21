@class NSString;

@interface PHAssetCreationRequestBridge : NSObject <PLAssetJobExecutor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildAdjustmentsPlistPathForPhotoKitIngestJob:(id)a0 withSourcePath:(id)a1;

- (void)_deleteImageJobFilesWithJobDictionary:(id)a0;
- (void)_deleteJobFileAtPath:(id)a0 withJobDict:(id)a1;
- (char)_executeCreationRequestWithImageJobDict:(id)a0 error:(id *)a1;
- (char)_executeCreationRequestWithVideoJobDict:(id)a0 error:(id *)a1;
- (char)_finalizeBurstImage:(id)a0;
- (char)_handleVideoPreviewImageOnlyJob:(id)a0 previewImageSurface:(struct __IOSurface { } *)a1 error:(id *)a2;
- (id)executeCreationRequestWithBatchJobDictionaries:(id)a0;
- (id)executeCreationRequestWithJobDict:(id)a0 previewImageSurface:(struct __IOSurface { } *)a1;

@end
