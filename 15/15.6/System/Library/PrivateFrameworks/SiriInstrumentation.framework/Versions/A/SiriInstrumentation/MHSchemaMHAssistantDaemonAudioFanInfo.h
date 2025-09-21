@class NSData;

@interface MHSchemaMHAssistantDaemonAudioFanInfo : SISchemaInstrumentationMessage {
    struct { unsigned char fanId : 1; unsigned char currentSpeed : 1; unsigned char targetSpeed : 1; } _has;
}

@property (nonatomic) unsigned int fanId;
@property (nonatomic) char hasFanId;
@property (nonatomic) int currentSpeed;
@property (nonatomic) char hasCurrentSpeed;
@property (nonatomic) int targetSpeed;
@property (nonatomic) char hasTargetSpeed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCurrentSpeed;
- (void)deleteFanId;
- (void)deleteTargetSpeed;
- (id)suppressMessageUnderConditions;

@end
