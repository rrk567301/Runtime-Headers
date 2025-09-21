@class PLUSSchemaPLUSSuggesterDomainSuggestionMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, NSData;

@interface PLUSSchemaPLUSSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionSurfaced : 1; unsigned char suggestionNoveltyState : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) char hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) char hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) char hasOriginalRequestId;
@property (nonatomic) int suggestionSurfaced;
@property (nonatomic) char hasSuggestionSurfaced;
@property (nonatomic) int suggestionNoveltyState;
@property (nonatomic) char hasSuggestionNoveltyState;
@property (retain, nonatomic) PLUSSchemaPLUSSuggesterDomainSuggestionMetadata *domainSuggestionMetadata;
@property (nonatomic) char hasDomainSuggestionMetadata;
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
- (void)deleteDomainSuggestionMetadata;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionNoveltyState;
- (void)deleteSuggestionSurfaced;
- (id)suppressMessageUnderConditions;

@end
