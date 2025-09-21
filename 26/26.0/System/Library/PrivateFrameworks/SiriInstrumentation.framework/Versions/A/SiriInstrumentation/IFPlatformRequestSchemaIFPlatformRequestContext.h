@class IFPlatformRequestSchemaIFPlatformRequestFailed, IFPlatformRequestSchemaIFPlatformRequestStarted, IFPlatformRequestSchemaIFPlatformRequestEnded, SISchemaUUID, NSData;

@interface IFPlatformRequestSchemaIFPlatformRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) IFPlatformRequestSchemaIFPlatformRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (void)deleteTraceId;

@end
