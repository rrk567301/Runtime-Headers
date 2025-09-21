@class PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, PLUSSchemaPLUSDomainConfiguredState, NSData;

@interface PLUSSchemaPLUSSuggesterMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggesterEnabled : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) char hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (nonatomic) char isSuggesterEnabled;
@property (nonatomic) char hasIsSuggesterEnabled;
@property (retain, nonatomic) PLUSSchemaPLUSDomainConfiguredState *domainConfiguredState;
@property (nonatomic) char hasDomainConfiguredState;
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
- (void)deleteDomainConfiguredState;
- (void)deleteIsSuggesterEnabled;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (id)suppressMessageUnderConditions;

@end
