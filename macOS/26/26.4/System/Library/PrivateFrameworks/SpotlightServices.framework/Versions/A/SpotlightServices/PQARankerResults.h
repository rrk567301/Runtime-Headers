@class PQARequestIdentifiers, PQAResultList;

@interface PQARankerResults : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) PQARequestIdentifiers *requestIdentifier;
@property (readonly, nonatomic) BOOL hasRetrievedResults;
@property (retain, nonatomic) PQAResultList *retrievedResults;
@property (readonly, nonatomic) BOOL hasRankedResults;
@property (retain, nonatomic) PQAResultList *rankedResults;
@property (readonly, nonatomic) BOOL hasFilteredResults;
@property (retain, nonatomic) PQAResultList *filteredResults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
