@class NSMutableArray;

@interface CKDPZoneRetrieveAncestorsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ancestors;

+ (Class)ancestorsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAncestors:(id)a0;
- (id)ancestorsAtIndex:(unsigned long long)a0;
- (unsigned long long)ancestorsCount;
- (void)clearAncestors;

@end
