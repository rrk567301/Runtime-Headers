@class NSString, NSData, SISchemaUUID;

@interface MHSchemaMHAssistantDaemonAudioRecordingInterruptionStarted : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *avAudioSessionInterruptorName;
@property (nonatomic) char hasAvAudioSessionInterruptorName;
@property (copy, nonatomic) NSString *avAudioSessionInterruptionType;
@property (nonatomic) char hasAvAudioSessionInterruptionType;
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
- (void)deleteAvAudioSessionInterruptionType;
- (void)deleteAvAudioSessionInterruptorName;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
