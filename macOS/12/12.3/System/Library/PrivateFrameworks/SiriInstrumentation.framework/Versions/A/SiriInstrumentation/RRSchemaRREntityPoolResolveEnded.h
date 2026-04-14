@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearQueryResults;
- (void)addQueryResults:(id)a0;
- (void)deleteQueryResults;
- (unsigned long long)queryResultsCount;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (void)deleteOutcome;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
