@class NSData, NSString;

@interface SISchemaServerEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char timestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) char hasTurnID;
@property (nonatomic) long long timestampNs;
@property (nonatomic) char hasTimestampNs;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) char hasSiriDeviceID;
@property (copy, nonatomic) NSString *serverPod;
@property (nonatomic) char hasServerPod;
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
- (void)deleteServerPod;
- (void)deleteSiriDeviceID;
- (void)deleteTimestampNs;
- (void)deleteTurnID;
- (id)suppressMessageUnderConditions;

@end
