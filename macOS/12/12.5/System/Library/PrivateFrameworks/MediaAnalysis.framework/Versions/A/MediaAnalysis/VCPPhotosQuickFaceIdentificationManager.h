@class VNPersonsModel, VCPFaceAnalyzer, VNEntityIdentificationModel, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
}

+ (BOOL)_fastFaceMigrationEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (int)_classifyFaces:(id)a0 forAsset:(id)a1 withResults:(id *)a2;
- (int)_persistResults:(id)a0 withFaces:(id)a1 forAsset:(id)a2;
- (int)_loadPetsModel;
- (id)_fetchPersonsToFeedVIPModel;
- (id)_fetchPetsToFeedVIPModel;
- (id)fetchEntityForModelType:(unsigned long long)a0;
- (BOOL)_persistPetsModel:(id)a0 error:(id *)a1;
- (BOOL)_persistPersonsModel:(id)a0 error:(id *)a1;
- (BOOL)_faceProcessingPassGoalWithExtendTimeout:(id /* block */)a0;
- (BOOL)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)a0;
- (BOOL)_keepCurrentPersonsModelWithExtendTimeout:(id /* block */)a0;
- (BOOL)_needToGenerateModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1 withExtendTimeout:(id /* block */)a2;
- (int)_generatePersonsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (int)_generatePetsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (int)classifyVIPPets;
- (int)generateVIPModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(BOOL)a1 modelGenerated:(BOOL *)a2 extendTimeout:(id /* block */)a3 andCancel:(id /* block */)a4;
- (int)processAsset:(id)a0;

@end
