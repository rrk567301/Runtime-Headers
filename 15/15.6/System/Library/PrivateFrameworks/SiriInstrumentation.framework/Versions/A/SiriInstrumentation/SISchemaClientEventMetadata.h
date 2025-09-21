@class NSData, NSString;

@interface SISchemaClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventGeneratedRelativeToBootTimeTimestampNs : 1; } _has;
}

@property (copy, nonatomic) NSData *turnID;
@property (nonatomic) char hasTurnID;
@property (copy, nonatomic) NSData *siriDeviceID;
@property (nonatomic) char hasSiriDeviceID;
@property (copy, nonatomic) NSString *eventGeneratedTimestampRefId;
@property (nonatomic) char hasEventGeneratedTimestampRefId;
@property (nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property (nonatomic) char hasEventGeneratedRelativeToBootTimeTimestampNs;
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
- (void)deleteEventGeneratedRelativeToBootTimeTimestampNs;
- (void)deleteEventGeneratedTimestampRefId;
- (void)deleteSiriDeviceID;
- (void)deleteTurnID;
- (id)suppressMessageUnderConditions;
- (void)willProduceDictionaryRepresentation:(id)a0;

@end
