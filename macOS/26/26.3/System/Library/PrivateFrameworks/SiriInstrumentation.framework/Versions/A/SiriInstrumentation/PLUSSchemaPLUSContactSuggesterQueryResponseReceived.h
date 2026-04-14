@class NSArray, NSData;

@interface PLUSSchemaPLUSContactSuggesterQueryResponseReceived : SISchemaInstrumentationMessage {
    struct { unsigned char hasMatchingResults : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) BOOL hasMatchingResults;
@property (nonatomic) BOOL hasHasMatchingResults;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)resultsCount;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteHasMatchingResults;
- (void)deleteResults;

@end
