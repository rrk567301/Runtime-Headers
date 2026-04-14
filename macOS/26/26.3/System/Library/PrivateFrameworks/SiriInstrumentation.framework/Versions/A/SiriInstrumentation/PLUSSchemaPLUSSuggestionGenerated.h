@class PLUSSchemaPLUSChangeDataCaptureMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, PLUSSchemaPLUSSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSChangeDataCaptureMetadata *suggestionChangeDataCaptureMetadata;
@property (nonatomic) BOOL hasSuggestionChangeDataCaptureMetadata;
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
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionChangeDataCaptureMetadata;
- (void)deleteSuggestionDomainMetadata;

@end
