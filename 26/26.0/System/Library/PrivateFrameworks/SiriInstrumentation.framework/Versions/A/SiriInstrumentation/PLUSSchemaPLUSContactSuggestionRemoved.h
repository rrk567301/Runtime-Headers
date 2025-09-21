@class PLUSSchemaPLUSContactSuggestionUsageSummary, PLUSSchemaPLUSContactSuggestion, NSData;

@interface PLUSSchemaPLUSContactSuggestionRemoved : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *removedSuggestion;
@property (nonatomic) BOOL hasRemovedSuggestion;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionUsageSummary *usageSummary;
@property (nonatomic) BOOL hasUsageSummary;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteRemovedSuggestion;
- (void)deleteUsageSummary;

@end
