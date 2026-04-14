@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearQueryResults;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addQueryResults:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)queryResultsCount;
- (void)deleteOutcome;
- (void)deleteQueryResults;

@end
