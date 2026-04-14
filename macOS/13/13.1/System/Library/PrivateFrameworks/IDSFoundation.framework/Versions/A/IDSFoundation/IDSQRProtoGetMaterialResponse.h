@class NSMutableArray;

@interface IDSQRProtoGetMaterialResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearMaterials;
- (void)addMaterials:(id)a0;
- (unsigned long long)materialsCount;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
