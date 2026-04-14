@class NSData, NSString;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedTreatmentDefinition;
@property (readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature;
@property (readonly, nonatomic) NSData *publicCertificate;

+ (id)artifactWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)a0;
- (id)copyWithReplacementPublicCertificate:(id)a0;
- (BOOL)isValidWithTreatmentId:(id)a0;

@end
