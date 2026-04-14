@class NSString, NSArray, NSData, TRIExperimentDeployment, TRIClientExperiment, NSDate;

@interface TRIClientExperimentArtifact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) TRIExperimentDeployment *experimentDeployment;
@property (readonly) BOOL hasDeploymentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) int deploymentEnvironment;
@property (nonatomic) int cloudKitContainer;
@property (retain, nonatomic) NSString *teamId;
@property (retain, nonatomic) NSData *encodedExperimentDefinition;
@property (retain, nonatomic) NSString *encodedExperimentDefinitionSignature;
@property (retain, nonatomic) NSData *publicCertificate;
@property (readonly, nonatomic) TRIClientExperiment *experiment;
@property (nonatomic) int experimentState;
@property (nonatomic) int experimentType;
@property (nonatomic) int experimentPriority;
@property (nonatomic) BOOL internalBuildOnly;
@property (retain, nonatomic) NSDate *deploymentDate;
@property (retain, nonatomic) NSArray *namespaces;
@property (retain, nonatomic) NSArray *namespaceCompatibilityVersions;
@property (nonatomic) BOOL forLaunchDaemon;

+ (BOOL)shouldSetForLaunchDaemonFlagFromFields:(id)a0 experiment:(id)a1 error:(id *)a2;
+ (id)usableArtifactFromSource:(id)a0;
+ (id)artifactFromCKRecordResult:(id)a0 withContainer:(int)a1 teamId:(id)a2 requireDeploymentId:(BOOL)a3 completion:(id /* block */)a4;
+ (id)parseFromData:(id)a0 error:(id *)a1;
+ (id)artifactWithExperiment:(id)a0;
+ (id)allReferencedCKRecordKeys;
+ (id)_convertNamespaceIdsToNames:(id)a0;

- (BOOL)isCompatibleWithNamespaceDescriptorProvider:(id)a0 error:(id *)a1;
- (id)asPersistedArtifact;
- (BOOL)isValid;
- (id)counterfactualsTreatmentsToFactorPackSetIdsWithActiveTreatmentId:(id)a0;
- (BOOL)hasNamespacesAvailableForExperimentWithDatabase:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)requiresTreatmentInstallation;
- (BOOL)requiresDecryption;
- (void).cxx_destruct;
- (BOOL)saveWithDatabase:(id)a0 paths:(id)a1;
- (unsigned long long)hash;
- (id)factorPackSetIdForTreatmentId:(id)a0;
- (id)init;
- (id)initWithExperiment:(id)a0;
- (BOOL)hasValidNamespacesWithError:(id *)a0;
- (id)data;
- (id)initWithCoder:(id)a0;
- (BOOL)isCompatibleCounterfactual;
- (id)decryptExperimentData:(id)a0 withKey:(id)a1 error:(id *)a2;

@end
