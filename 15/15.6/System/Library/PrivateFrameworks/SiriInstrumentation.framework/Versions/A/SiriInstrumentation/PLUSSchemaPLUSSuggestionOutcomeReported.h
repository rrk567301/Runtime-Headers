@class PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, PLUSSchemaPLUSSuggestionDomainOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionOutcome : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) char hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) char hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (nonatomic) int suggestionOutcome;
@property (nonatomic) char hasSuggestionOutcome;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainOutcome *domainOutcome;
@property (nonatomic) char hasDomainOutcome;
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
- (void)deleteDomainOutcome;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionOutcome;
- (id)suppressMessageUnderConditions;

@end
