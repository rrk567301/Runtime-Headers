@class NSMutableArray;

@interface NPKProtoGenerateAuxiliaryCapabilitiesRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *registrationRequirements;

+ (Class)registrationRequirementsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addRegistrationRequirements:(id)a0;
- (void)clearRegistrationRequirements;
- (id)registrationRequirementsAtIndex:(unsigned long long)a0;
- (unsigned long long)registrationRequirementsCount;

@end
