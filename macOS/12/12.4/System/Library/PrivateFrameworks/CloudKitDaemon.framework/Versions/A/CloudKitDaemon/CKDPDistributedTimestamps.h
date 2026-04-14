@class NSMutableArray;

@interface CKDPDistributedTimestamps : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *siteIdentifiers;
@property (retain, nonatomic) NSMutableArray *siteVersionVectors;

+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addSiteIdentifiers:(id)a0;
- (void)addSiteVersionVectors:(id)a0;
- (unsigned long long)siteIdentifiersCount;
- (void)clearSiteIdentifiers;
- (id)siteIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)siteVersionVectorsCount;
- (void)clearSiteVersionVectors;
- (id)siteVersionVectorsAtIndex:(unsigned long long)a0;

@end
