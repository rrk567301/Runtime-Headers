@class NSData, PLUSSchemaPLUSContactSuggestion;

@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggestionUpdated : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (nonatomic) BOOL isSuggestionUpdated;
@property (nonatomic) BOOL hasIsSuggestionUpdated;
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
- (void)deleteIsSuggestionUpdated;

@end
