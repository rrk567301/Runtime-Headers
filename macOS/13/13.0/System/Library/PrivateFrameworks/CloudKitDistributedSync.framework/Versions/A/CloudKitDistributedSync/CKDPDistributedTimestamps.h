@class NSMutableArray;

@interface CKDPDistributedTimestamps : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *siteIdentifiers;
@property (retain, nonatomic) NSMutableArray *siteVersionVectors;

+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;

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
- (void)clearSiteIdentifiers;
- (void)addSiteIdentifiers:(id)a0;
- (unsigned long long)siteIdentifiersCount;
- (id)siteIdentifiersAtIndex:(unsigned long long)a0;
- (void)clearSiteVersionVectors;
- (void)addSiteVersionVectors:(id)a0;
- (unsigned long long)siteVersionVectorsCount;
- (id)siteVersionVectorsAtIndex:(unsigned long long)a0;

@end
