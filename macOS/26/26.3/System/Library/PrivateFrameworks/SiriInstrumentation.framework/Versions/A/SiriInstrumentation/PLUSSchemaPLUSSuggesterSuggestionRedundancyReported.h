@class SISchemaUUID, NSData, PLUSSchemaPLUSSuggestionDomainMetadata;

@interface PLUSSchemaPLUSSuggesterSuggestionRedundancyReported : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionRedundancyState : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) SISchemaUUID *suggestionLinkId;
@property (nonatomic) BOOL hasSuggestionLinkId;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) int suggestionRedundancyState;
@property (nonatomic) BOOL hasSuggestionRedundancyState;
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
- (void)deleteSuggestionRedundancyState;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;

@end
