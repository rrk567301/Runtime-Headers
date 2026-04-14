@class NSData, PLUSSchemaPLUSContactSuggestion;

@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggestionUpdated : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (nonatomic) BOOL isSuggestionUpdated;
@property (nonatomic) BOOL hasIsSuggestionUpdated;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteGeneratedSuggestion;
- (void)deleteIsSuggestionUpdated;

@end
