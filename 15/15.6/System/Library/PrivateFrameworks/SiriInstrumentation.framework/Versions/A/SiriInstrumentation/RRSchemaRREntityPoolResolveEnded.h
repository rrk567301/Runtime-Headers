@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) char hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addQueryResults:(id)a0;
- (void)clearQueryResults;
- (void)deleteOutcome;
- (void)deleteQueryResults;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)queryResultsCount;
- (id)suppressMessageUnderConditions;

@end
