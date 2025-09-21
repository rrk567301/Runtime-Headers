@class NSData, SISchemaUUID;

@interface GATSchemaGATRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char appIntentName : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *clientTraceId;
@property (nonatomic) char hasClientTraceId;
@property (nonatomic) int appIntentName;
@property (nonatomic) char hasAppIntentName;
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
- (void)deleteAppIntentName;
- (void)deleteClientTraceId;
- (id)suppressMessageUnderConditions;

@end
