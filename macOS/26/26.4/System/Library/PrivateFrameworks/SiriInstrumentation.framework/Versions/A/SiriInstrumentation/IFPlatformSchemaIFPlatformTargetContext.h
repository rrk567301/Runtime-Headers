@class IFPlatformSchemaIFPlatformTargetFailed, NSData, IFPlatformSchemaIFPlatformTargetEnded, SISchemaUUID, IFPlatformSchemaIFPlatformTargetStarted;

@interface IFPlatformSchemaIFPlatformTargetContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) IFPlatformSchemaIFPlatformTargetFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;

@end
