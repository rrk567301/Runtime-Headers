@class NSArray, NSData, SISchemaUUID;

@interface JRSchemaUserHistory : SISchemaInstrumentationMessage {
    struct { unsigned char historicalFeedback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *toolId;
@property (nonatomic) char hasToolId;
@property (copy, nonatomic) NSArray *historicalContexts;
@property (nonatomic) float historicalFeedback;
@property (nonatomic) char hasHistoricalFeedback;
@property (copy, nonatomic) NSArray *historicalLocationContexts;
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
- (void)deleteHistoricalLocationContext;
- (void)addHistoricalContext:(float)a0;
- (void)addHistoricalLocationContext:(id)a0;
- (void)clearHistoricalContext;
- (void)clearHistoricalLocationContext;
- (void)deleteHistoricalContext;
- (void)deleteHistoricalFeedback;
- (void)deleteToolId;
- (float)historicalContextAtIndex:(unsigned long long)a0;
- (unsigned long long)historicalContextCount;
- (id)historicalLocationContextAtIndex:(unsigned long long)a0;
- (unsigned long long)historicalLocationContextCount;
- (id)suppressMessageUnderConditions;

@end
