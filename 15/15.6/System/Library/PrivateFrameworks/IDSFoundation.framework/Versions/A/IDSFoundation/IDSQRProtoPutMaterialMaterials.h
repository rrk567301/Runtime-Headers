@class NSMutableArray;

@interface IDSQRProtoPutMaterialMaterials : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;

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
- (void)addMaterials:(id)a0;
- (void)clearMaterials;
- (id)materialsAtIndex:(unsigned long long)a0;
- (unsigned long long)materialsCount;

@end
