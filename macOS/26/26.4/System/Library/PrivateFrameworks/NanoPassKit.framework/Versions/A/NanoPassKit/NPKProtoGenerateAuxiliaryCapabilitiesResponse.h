@class NSData, NSMutableArray;

@interface NPKProtoGenerateAuxiliaryCapabilitiesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *requirementKeys;
@property (retain, nonatomic) NSMutableArray *keyMaterialValues;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)keyMaterialValuesType;
+ (Class)requirementKeysType;

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
- (void)addKeyMaterialValues:(id)a0;
- (void)addRequirementKeys:(id)a0;
- (void)clearKeyMaterialValues;
- (void)clearRequirementKeys;
- (id)keyMaterialValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)keyMaterialValuesCount;
- (id)requirementKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)requirementKeysCount;

@end
