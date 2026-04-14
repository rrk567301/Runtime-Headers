@class NSArray, PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, NSData;

@interface PLUSSchemaPLUSSuggesterQueried : SISchemaInstrumentationMessage {
    struct { unsigned char matchedResultsPopulated : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (copy, nonatomic) NSArray *matchedResults;
@property (nonatomic) BOOL matchedResultsPopulated;
@property (nonatomic) BOOL hasMatchedResultsPopulated;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMatchedResults:(id)a0;
- (void)clearMatchedResults;
- (void)deleteMatchedResults;
- (void)deleteMatchedResultsPopulated;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (id)matchedResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)matchedResultsCount;

@end
