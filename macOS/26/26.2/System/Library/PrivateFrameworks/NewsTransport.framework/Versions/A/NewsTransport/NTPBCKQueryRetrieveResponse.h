@class NSData, NSMutableArray;

@interface NTPBCKQueryRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *queryResults;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)queryResultsType;

- (void)addQueryResults:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)queryResultsCount;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearQueryResults;
- (id)dictionaryRepresentation;

@end
