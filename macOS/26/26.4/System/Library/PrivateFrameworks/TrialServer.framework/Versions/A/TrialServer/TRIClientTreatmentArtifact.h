@class NSData, NSString;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedTreatmentDefinition;
@property (readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature;
@property (readonly, nonatomic) NSData *publicCertificate;

+ (id)artifactWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)description;
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)a0;
- (id)copyWithReplacementPublicCertificate:(id)a0;
- (id)initWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2;
- (BOOL)isValidWithTreatmentId:(id)a0;

@end
