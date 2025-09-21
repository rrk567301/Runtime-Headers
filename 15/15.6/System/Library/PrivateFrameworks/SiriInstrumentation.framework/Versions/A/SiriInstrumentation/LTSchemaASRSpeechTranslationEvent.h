@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char timeToFirstPartialMs : 1; unsigned char timeToFinalResultMs : 1; unsigned char latencyFinalResultMs : 1; unsigned char timeToSendFirstAudioPacket : 1; unsigned char timeToReceiveFirstAudioPacket : 1; unsigned char numAudioPacket : 1; unsigned char timeToSendFinishAudio : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) char hasSelectedLocale;
@property (nonatomic) unsigned int timeToFirstPartialMs;
@property (nonatomic) char hasTimeToFirstPartialMs;
@property (nonatomic) unsigned int timeToFinalResultMs;
@property (nonatomic) char hasTimeToFinalResultMs;
@property (nonatomic) unsigned int latencyFinalResultMs;
@property (nonatomic) char hasLatencyFinalResultMs;
@property (nonatomic) unsigned int timeToSendFirstAudioPacket;
@property (nonatomic) char hasTimeToSendFirstAudioPacket;
@property (nonatomic) unsigned int timeToReceiveFirstAudioPacket;
@property (nonatomic) char hasTimeToReceiveFirstAudioPacket;
@property (nonatomic) unsigned int numAudioPacket;
@property (nonatomic) char hasNumAudioPacket;
@property (nonatomic) unsigned int timeToSendFinishAudio;
@property (nonatomic) char hasTimeToSendFinishAudio;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deleteLatencyFinalResultMs;
- (void)deleteNumAudioPacket;
- (void)deleteSelectedLocale;
- (void)deleteTimeToFinalResultMs;
- (void)deleteTimeToFirstPartialMs;
- (void)deleteTimeToReceiveFirstAudioPacket;
- (void)deleteTimeToSendFinishAudio;
- (void)deleteTimeToSendFirstAudioPacket;
- (id)suppressMessageUnderConditions;

@end
