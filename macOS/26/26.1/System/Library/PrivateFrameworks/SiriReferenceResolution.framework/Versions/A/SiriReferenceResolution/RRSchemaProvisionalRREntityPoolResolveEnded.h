@class NSArray, NSData;

@interface RRSchemaProvisionalRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)queryResultsCount;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (void)clearQueryResults;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void)addQueryResults:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
