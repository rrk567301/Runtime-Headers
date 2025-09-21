@class NSMutableArray;

@interface HDCodableStateSyncCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sampleCollections;
@property (retain, nonatomic) NSMutableArray *deletedSampleCollections;

+ (Class)deletedSampleCollectionsType;
+ (Class)sampleCollectionsType;

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
- (void)addDeletedSampleCollections:(id)a0;
- (void)addSampleCollections:(id)a0;
- (void)clearDeletedSampleCollections;
- (void)clearSampleCollections;
- (id)deletedSampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)deletedSampleCollectionsCount;
- (id)sampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)sampleCollectionsCount;

@end
