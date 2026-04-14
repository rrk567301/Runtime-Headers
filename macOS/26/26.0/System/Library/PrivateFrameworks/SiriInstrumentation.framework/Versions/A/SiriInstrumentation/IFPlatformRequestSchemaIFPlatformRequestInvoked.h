@class NSData, SISchemaUUID;

@interface IFPlatformRequestSchemaIFPlatformRequestInvoked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) BOOL hasIfSessionId;
@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) BOOL hasClientTraceId;
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
- (void)deleteClientTraceId;
- (void)deleteIfSessionId;

@end
