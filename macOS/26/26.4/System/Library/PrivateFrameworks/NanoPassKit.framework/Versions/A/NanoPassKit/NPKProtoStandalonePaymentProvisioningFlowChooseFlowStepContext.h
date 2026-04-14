@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (unsigned long long)sectionsCount;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addSections:(id)a0;
- (void)clearSections;
- (id)description;
- (void)writeTo:(id)a0;

@end
