@class NSMutableArray;

@interface IDSQRProtoPutMaterialRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearMaterials;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)materialsCount;
- (void)addMaterials:(id)a0;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
