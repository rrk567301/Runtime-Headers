@class NSString, ADRotatingIdentifiers, ADUserTargetingProperties;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {
    struct { unsigned char supportedODMLVersion : 1; unsigned char clientExclusive : 1; unsigned char enableImagesForDupes : 1; unsigned char inAllocation : 1; unsigned char isBaseline : 1; unsigned char isTest : 1; } _has;
}

@property (readonly, nonatomic) char hasProperties;
@property (retain, nonatomic) ADUserTargetingProperties *properties;
@property (nonatomic) char hasIsTest;
@property (nonatomic) char isTest;
@property (nonatomic) char hasIsBaseline;
@property (nonatomic) char isBaseline;
@property (nonatomic) char hasEnableImagesForDupes;
@property (nonatomic) char enableImagesForDupes;
@property (nonatomic) char hasSupportedODMLVersion;
@property (nonatomic) int supportedODMLVersion;
@property (readonly, nonatomic) char hasExperimentID;
@property (retain, nonatomic) NSString *experimentID;
@property (readonly, nonatomic) char hasTreatmentID;
@property (retain, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) char hasDeploymentID;
@property (retain, nonatomic) NSString *deploymentID;
@property (nonatomic) char hasInAllocation;
@property (nonatomic) char inAllocation;
@property (nonatomic) char hasClientExclusive;
@property (nonatomic) char clientExclusive;
@property (readonly, nonatomic) char hasRotatingIdentifiers;
@property (retain, nonatomic) ADRotatingIdentifiers *rotatingIdentifiers;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
