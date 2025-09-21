@class PLUSSchemaPLUSChangeDataCaptureMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, PLUSSchemaPLUSSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) char hasSuggestionDomainMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) char hasGeneratedSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSChangeDataCaptureMetadata *suggestionChangeDataCaptureMetadata;
@property (nonatomic) char hasSuggestionChangeDataCaptureMetadata;
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
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionChangeDataCaptureMetadata;
- (void)deleteSuggestionDomainMetadata;
- (id)suppressMessageUnderConditions;

@end
