@class NSMutableArray;

@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *materialOwners;

+ (Class)materialOwnersType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMaterialOwners:(id)a0;
- (void)clearMaterialOwners;
- (id)materialOwnersAtIndex:(unsigned long long)a0;
- (unsigned long long)materialOwnersCount;

@end
