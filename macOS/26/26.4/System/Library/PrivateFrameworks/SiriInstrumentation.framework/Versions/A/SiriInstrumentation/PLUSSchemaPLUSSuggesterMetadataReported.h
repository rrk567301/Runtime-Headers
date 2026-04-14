@class PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, PLUSSchemaPLUSDomainConfiguredState, NSData;

@interface PLUSSchemaPLUSSuggesterMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggesterEnabled : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) BOOL isSuggesterEnabled;
@property (nonatomic) BOOL hasIsSuggesterEnabled;
@property (retain, nonatomic) PLUSSchemaPLUSDomainConfiguredState *domainConfiguredState;
@property (nonatomic) BOOL hasDomainConfiguredState;
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
- (void)deleteDomainConfiguredState;
- (void)deleteIsSuggesterEnabled;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;

@end
