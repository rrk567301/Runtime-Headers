@class NSString, NSArray, NSData, TRIExperimentDeployment, TRIClientExperiment, NSDate;

@interface TRIClientExperimentArtifact : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) TRIExperimentDeployment *experimentDeployment;
@property (readonly) char hasDeploymentId;
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
@property (nonatomic) char internalBuildOnly;
@property (retain, nonatomic) NSDate *deploymentDate;
@property (retain, nonatomic) NSArray *namespaces;
@property (retain, nonatomic) NSArray *namespaceCompatibilityVersions;

+ (id)parseFromData:(id)a0 error:(id *)a1;
+ (id)_convertNamespaceIdsToNames:(id)a0;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecordResult:(id)a0 withNamespaceDescriptorProvider:(id)a1 container:(int)a2 teamId:(id)a3 requireDeploymentId:(char)a4 completion:(id /* block */)a5;
+ (id)artifactWithExperiment:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asPersistedArtifact;
- (id)counterfactualsTreatmentsToFactorPackSetIdsWithActiveTreatmentId:(id)a0;
- (id)factorPackSetIdForTreatmentId:(id)a0;
- (char)hasNamespacesAvailableForExperimentWithDatabase:(id)a0;
- (id)initWithExperiment:(id)a0;
- (char)isCompatibleCounterfactual;
- (char)isCompatibleWithNamespaceDescriptorProvider:(id)a0 error:(id *)a1;
- (char)saveWithDatabase:(id)a0 paths:(id)a1;

@end
