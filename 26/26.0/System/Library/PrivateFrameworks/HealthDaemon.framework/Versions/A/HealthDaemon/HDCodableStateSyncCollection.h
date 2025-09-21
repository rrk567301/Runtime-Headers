@class NSMutableArray;

@interface HDCodableStateSyncCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sampleCollections;
@property (retain, nonatomic) NSMutableArray *deletedSampleCollections;

+ (Class)deletedSampleCollectionsType;
+ (Class)sampleCollectionsType;

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
- (void)addDeletedSampleCollections:(id)a0;
- (void)addSampleCollections:(id)a0;
- (void)clearDeletedSampleCollections;
- (void)clearSampleCollections;
- (id)deletedSampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)deletedSampleCollectionsCount;
- (id)sampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)sampleCollectionsCount;

@end
