@class NSString, TRIRolloutIdentifiers, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface SGTrialClientWrapper : NSObject {
    TRIClient *_triClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_namespaceName;
    NSString *_experimentId;
    int _deploymentId;
    NSString *_treatmentId;
    TRIRolloutIdentifiers *_rolloutIdentifiers;
}

- (void).cxx_destruct;
- (id)experimentId;
- (id)modelPath;
- (id)initWithClientIdentifier:(int)a0;
- (id)deploymentId;
- (id)treatmentId;
- (id)_modelDirectoryPathCreateIfNeeded:(char)a0;
- (id)_modelNameForCurrentEnrollment;
- (id)_modelNameForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;
- (id)_modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2 createIfNeeded:(char)a3;
- (char)_unarchiveFrom:(id)a0 to:(id)a1;
- (char)_uncompressModelAtPath:(id)a0 toPath:(id)a1;
- (id)baseModelName;
- (void)cleanExperimentModelsFromTrialModelsFolder;
- (id)modelPathForCurrentEnrollment;
- (id)modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;
- (id)modelPathForTriClient:(id)a0 andNamespace:(id)a1;
- (char)refreshEnrollmentInformationForNamespace:(id)a0;
- (char)refreshRolloutIdentifiersForNamespace:(id)a0;
- (id)rolloutIdentifiers;
- (void)uncompressModelAndUpdateFactors:(id)a0 destinationPath:(id)a1;
- (void)updateFactors;

@end
