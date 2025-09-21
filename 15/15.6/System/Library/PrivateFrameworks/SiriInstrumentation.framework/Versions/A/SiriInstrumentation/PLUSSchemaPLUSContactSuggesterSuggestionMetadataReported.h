@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { unsigned char isDuplicateSuggestion : 1; unsigned char isSuggestionPresentInModelOutput : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) char hasSuggestionId;
@property (nonatomic) char isDuplicateSuggestion;
@property (nonatomic) char hasIsDuplicateSuggestion;
@property (nonatomic) char isSuggestionPresentInModelOutput;
@property (nonatomic) char hasIsSuggestionPresentInModelOutput;
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
- (void)deleteIsDuplicateSuggestion;
- (void)deleteIsSuggestionPresentInModelOutput;
- (void)deleteSuggestionId;
- (id)suppressMessageUnderConditions;

@end
