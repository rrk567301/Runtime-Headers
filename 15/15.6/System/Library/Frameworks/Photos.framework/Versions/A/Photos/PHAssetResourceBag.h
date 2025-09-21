@class PHAssetCreationRequest, NSArray, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject {
    NSArray *_assetResourceContexts;
}

@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest;
@property (readonly, nonatomic) NSArray *assetResources;
@property (readonly, nonatomic) char didValidateForInsertion;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char hasCurrentAdjustment;
@property (readonly, nonatomic) char hasOriginalAdjustment;
@property (readonly, nonatomic) char hasAdjustments;
@property (readonly, nonatomic) char hasRAW;
@property (readonly, nonatomic) char hasSpatialOverCapture;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long mediaSubtype;
@property (readonly, nonatomic) PHExternalAssetResource *primaryResource;

+ (id)_primaryAssetResource:(id)a0;
+ (char)_supportsAssetResourceTypes:(id)a0 mediaType:(long long *)a1 mediaSubtype:(unsigned long long *)a2 importedBy:(short)a3;
+ (char)supportsAssetResourceTypes:(id)a0 mediaType:(long long *)a1 importedBy:(short)a2;

- (void).cxx_destruct;
- (char)_extractValidatedAdjustmentsURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (char)_extractValidatedAudioURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (char)_extractValidatedImageURL:(id *)a0 imageData:(id *)a1 fromResource:(id)a2 photoLibrary:(id)a3 error:(id *)a4;
- (char)_extractValidatedVideoURL:(id *)a0 fromResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (id)_validateAssetResourceForAssetCreation:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (char)_validateAssetResourcesForAssetCreation:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)_validatedContextForResource:(id)a0;
- (id)assetResourceWithType:(long long)a0;
- (id)initWithAssetResources:(id)a0 assetCreationRequest:(id)a1;
- (char)validateForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)validatedDataForAssetResource:(id)a0;
- (id)validatedURLForAssetResource:(id)a0;

@end
