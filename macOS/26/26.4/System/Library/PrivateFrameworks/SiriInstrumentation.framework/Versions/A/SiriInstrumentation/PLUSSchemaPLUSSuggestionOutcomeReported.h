@class PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, PLUSSchemaPLUSSuggestionDomainOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionOutcome : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) BOOL hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) int suggestionOutcome;
@property (nonatomic) BOOL hasSuggestionOutcome;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainOutcome *domainOutcome;
@property (nonatomic) BOOL hasDomainOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDomainOutcome;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionOutcome;

@end
