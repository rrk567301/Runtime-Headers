@class PLUSSchemaPLUSContactSuggestionUsageSummary, PLUSSchemaPLUSContactSuggestion, NSData;

@interface PLUSSchemaPLUSContactSuggestionRemoved : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *removedSuggestion;
@property (nonatomic) char hasRemovedSuggestion;
@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionUsageSummary *usageSummary;
@property (nonatomic) char hasUsageSummary;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRemovedSuggestion;
- (void)deleteUsageSummary;
- (id)suppressMessageUnderConditions;

@end
