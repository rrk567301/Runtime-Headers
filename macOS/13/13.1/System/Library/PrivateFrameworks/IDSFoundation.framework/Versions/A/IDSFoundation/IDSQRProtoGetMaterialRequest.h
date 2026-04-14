@class NSMutableArray;

@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *materialOwners;

+ (Class)materialOwnersType;

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
- (void)clearMaterialOwners;
- (void)addMaterialOwners:(id)a0;
- (unsigned long long)materialOwnersCount;
- (id)materialOwnersAtIndex:(unsigned long long)a0;

@end
