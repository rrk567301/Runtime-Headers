@class NSMutableArray;

@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *materialOwners;

+ (Class)materialOwnersType;

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
- (void)addMaterialOwners:(id)a0;
- (void)clearMaterialOwners;
- (id)materialOwnersAtIndex:(unsigned long long)a0;
- (unsigned long long)materialOwnersCount;

@end
