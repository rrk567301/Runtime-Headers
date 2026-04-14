@class NSString, NSArray, NSData, SIServiceBatchInfo;

@interface SIServiceInstrumentationBatch : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL hasApp_id;
@property (retain, nonatomic) SIServiceBatchInfo *batch_info;
@property (nonatomic) BOOL hasBatch_info;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addEvent:(id)a0;
- (unsigned long long)eventCount;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)a0;
- (void)deleteEvent;
- (void)clearEvent;
- (void)deleteApp_id;
- (void)deleteBatch_info;

@end
