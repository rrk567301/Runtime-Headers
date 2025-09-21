@class NSData, SISchemaUUID;

@interface IFPlatformRequestSchemaIFPlatformRequestInvoked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ifSessionId;
@property (nonatomic) char hasIfSessionId;
@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) char hasClientTraceId;
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
- (void)deleteClientTraceId;
- (void)deleteIfSessionId;
- (id)suppressMessageUnderConditions;

@end
