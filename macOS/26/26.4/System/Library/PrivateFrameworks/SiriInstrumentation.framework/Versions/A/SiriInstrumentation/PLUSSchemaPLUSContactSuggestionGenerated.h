@class NSData, PLUSSchemaPLUSContactSuggestion;

@interface PLUSSchemaPLUSContactSuggestionGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isSuggestionUpdated : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *generatedSuggestion;
@property (nonatomic) BOOL hasGeneratedSuggestion;
@property (nonatomic) BOOL isSuggestionUpdated;
@property (nonatomic) BOOL hasIsSuggestionUpdated;
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
- (void)deleteIsSuggestionUpdated;

@end
