@class NSMutableArray;

@interface MXSpeechProfileSourceData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entitiesByCategorys;

+ (Class)entitiesByCategoryType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addEntitiesByCategory:(id)a0;
- (void)clearEntitiesByCategorys;
- (id)entitiesByCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesByCategorysCount;

@end
