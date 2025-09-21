@class SISchemaUUID, NSData, RGSiriSchemaRGCacheManagerCallEnded, RGSiriSchemaRGCacheManagerCallFailed, RGSiriSchemaRGCacheManagerCallStarted;

@interface RGSiriSchemaRGCacheManagerCallContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RGSiriSchemaRGCacheManagerCallStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) RGSiriSchemaRGCacheManagerCallEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) RGSiriSchemaRGCacheManagerCallFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) char hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;
- (id)suppressMessageUnderConditions;

@end
