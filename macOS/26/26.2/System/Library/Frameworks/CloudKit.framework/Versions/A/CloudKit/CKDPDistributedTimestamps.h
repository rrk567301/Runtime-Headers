@class NSMutableArray;

@interface CKDPDistributedTimestamps : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *siteIdentifiers;
@property (retain, nonatomic) NSMutableArray *siteVersionVectors;

+ (Class)siteIdentifiersType;
+ (Class)siteVersionVectorsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSiteIdentifiers:(id)a0;
- (void)addSiteVersionVectors:(id)a0;
- (void)clearSiteIdentifiers;
- (void)clearSiteVersionVectors;
- (id)siteIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)siteIdentifiersCount;
- (id)siteVersionVectorsAtIndex:(unsigned long long)a0;
- (unsigned long long)siteVersionVectorsCount;

@end
