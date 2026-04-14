@class NSMutableArray;

@interface IDSQRProtoPutMaterialMaterials : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearMaterials;
- (unsigned long long)materialsCount;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addMaterials:(id)a0;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
