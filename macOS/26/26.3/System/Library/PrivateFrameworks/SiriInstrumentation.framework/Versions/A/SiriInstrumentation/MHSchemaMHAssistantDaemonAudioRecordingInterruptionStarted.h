@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *avAudioSessionInterruptorName;
@property (nonatomic) BOOL hasAvAudioSessionInterruptorName;
@property (copy, nonatomic) NSString *avAudioSessionInterruptionType;
@property (nonatomic) BOOL hasAvAudioSessionInterruptionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAvAudioSessionInterruptionType;
- (void)deleteAvAudioSessionInterruptorName;
- (void)deleteLinkId;

@end
