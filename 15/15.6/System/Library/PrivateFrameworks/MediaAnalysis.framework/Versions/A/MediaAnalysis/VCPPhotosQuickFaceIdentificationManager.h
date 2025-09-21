@class VNPersonsModel, GDVUVisualUnderstandingService, VCPFaceAnalyzer, VNEntityIdentificationModel, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {
    VNPersonsModel *_personsModel;
    VNEntityIdentificationModel *_petsModel;
    PHPhotoLibrary *_photoLibrary;
    VCPFaceAnalyzer *_faceAnalyzer;
    NSObject<OS_dispatch_queue> *_management;
    GDVUVisualUnderstandingService *_vuService;
}

+ (char)_fastFaceMigrationEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (int)classifyVIPPets;
- (int)_classifyFaces:(id)a0 forAsset:(id)a1 detectedPersons:(id *)a2;
- (char)_faceProcessingPassGoalWithExtendTimeout:(id /* block */)a0;
- (id)_fetchPersonsToFeedVIPModel:(char)a0 allowUnverifiedPerson:(char)a1;
- (id)_fetchPetsToFeedVIPModel;
- (int)_generatePersonsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1 evaluationMode:(char)a2 allowUnverifiedPerson:(char)a3;
- (int)_generatePetsModelWithExtendTimeoutBlock:(id /* block */)a0 cancel:(id /* block */)a1;
- (char)_keepCurrentPersonsModelWithExtendTimeout:(id /* block */)a0;
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;
- (int)_loadPetsModel;
- (char)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)a0;
- (char)_needToGenerateModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(char)a1 withExtendTimeout:(id /* block */)a2;
- (char)_persistPersonsModel:(id)a0 evaluationMode:(char)a1 error:(id *)a2;
- (char)_persistPetsModel:(id)a0 error:(id *)a1;
- (int)faceProcessingVersionFromVNFaceprintRequestRevision:(unsigned long long)a0;
- (id)fetchEntityForModelType:(unsigned long long)a0 evaluationMode:(char)a1 allowUnverifiedPerson:(char)a2;
- (int)generateVIPModelWithType:(unsigned long long)a0 ignoreLastGenerationTime:(char)a1 evaluationMode:(char)a2 allowUnverifiedPerson:(char)a3 modelGenerated:(char *)a4 extendTimeout:(id /* block */)a5 andCancel:(id /* block */)a6;
- (int)loadPersonsModelAndInitializeFaceAnalyzerWrapper;
- (void)personIdentificationForSyndicationPhotoLibrary:(id)a0 withCancelOrExtendTimeoutBlock:(id /* block */)a1;
- (int)processAsset:(id)a0 onDemandDetection:(char)a1 detectedFaces:(id *)a2 detectedPersons:(id *)a3;

@end
