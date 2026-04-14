@class PLUSSchemaPLUSSuggesterDomainSuggestionMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, SISchemaUUID, NSData;

@interface PLUSSchemaPLUSSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionSurfaced : 1; unsigned char suggestionNoveltyState : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) BOOL hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) int suggestionSurfaced;
@property (nonatomic) BOOL hasSuggestionSurfaced;
@property (nonatomic) int suggestionNoveltyState;
@property (nonatomic) BOOL hasSuggestionNoveltyState;
@property (retain, nonatomic) PLUSSchemaPLUSSuggesterDomainSuggestionMetadata *domainSuggestionMetadata;
@property (nonatomic) BOOL hasDomainSuggestionMetadata;
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
- (void)deleteDomainSuggestionMetadata;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionNoveltyState;
- (void)deleteSuggestionSurfaced;

@end
