@class PLUSSchemaPLUSChangeDataCaptureMetadata, PLUSSchemaPLUSSuggestionDomainMetadata, PLUSSchemaPLUSSuggestion, NSData;

@interface PLUSSchemaPLUSSuggestionGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic) BOOL hasSuggestionDomainMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (retain, nonatomic) PLUSSchemaPLUSChangeDataCaptureMetadata *suggestionChangeDataCaptureMetadata;
@property (nonatomic) BOOL hasSuggestionChangeDataCaptureMetadata;
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
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionChangeDataCaptureMetadata;
- (void)deleteSuggestionDomainMetadata;

@end
