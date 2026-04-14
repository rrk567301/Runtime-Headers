@class NSData, NSMutableArray;

@interface NTPBCKQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (id)dictionaryRepresentation;
- (unsigned long long)queryResultsCount;
- (unsigned long long)hash;
- (void)clearQueryResults;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void)addQueryResults:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
