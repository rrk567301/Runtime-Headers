@class SISchemaUUID, NSData, PLUSSchemaPLUSSuggestionDomainMetadata;

@interface PLUSSchemaPLUSSuggesterSuggestionRedundancyReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionRedundancyState : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) char hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) char hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (nonatomic) int suggestionRedundancyState;
@property (nonatomic) char hasSuggestionRedundancyState;
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
- (void)deleteSuggestionRedundancyState;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (id)suppressMessageUnderConditions;

@end
