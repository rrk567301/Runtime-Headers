@class NSData;

@interface MHSchemaMHAssistantDaemonAudioFanInfo : SISchemaInstrumentationMessage {
    struct { unsigned char fanId : 1; unsigned char currentSpeed : 1; unsigned char targetSpeed : 1; } _has;
}

@property (nonatomic) unsigned int fanId;
@property (nonatomic) BOOL hasFanId;
@property (nonatomic) int currentSpeed;
@property (nonatomic) BOOL hasCurrentSpeed;
@property (nonatomic) int targetSpeed;
@property (nonatomic) BOOL hasTargetSpeed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCurrentSpeed;
- (void)deleteFanId;
- (void)deleteTargetSpeed;

@end
