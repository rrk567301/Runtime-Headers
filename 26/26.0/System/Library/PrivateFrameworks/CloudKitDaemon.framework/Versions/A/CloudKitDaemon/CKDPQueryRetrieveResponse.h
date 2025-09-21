@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (void)copyTo:(id)a0;
- (void)clearQueryResults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addQueryResults:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)queryResultsCount;

@end
