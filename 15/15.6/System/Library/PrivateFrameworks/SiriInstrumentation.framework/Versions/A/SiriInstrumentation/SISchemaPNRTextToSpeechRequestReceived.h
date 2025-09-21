@class NSString, NSData;

@interface SISchemaPNRTextToSpeechRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char isWarmStart : 1; unsigned char isSynthesisCached : 1; unsigned char sourceOfTTS : 1; unsigned char speechError : 1; } _has;
}

@property (copy, nonatomic) NSString *voiceAssetKey;
@property (nonatomic) char hasVoiceAssetKey;
@property (copy, nonatomic) NSString *voiceResourceAssetKey;
@property (nonatomic) char hasVoiceResourceAssetKey;
@property (nonatomic) char isWarmStart;
@property (nonatomic) char hasIsWarmStart;
@property (nonatomic) char isSynthesisCached;
@property (nonatomic) char hasIsSynthesisCached;
@property (nonatomic) int sourceOfTTS;
@property (nonatomic) char hasSourceOfTTS;
@property (nonatomic) int speechError;
@property (nonatomic) char hasSpeechError;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSynthesisCached;
- (void)deleteIsWarmStart;
- (void)deleteSourceOfTTS;
- (void)deleteSpeechError;
- (void)deleteVoiceAssetKey;
- (void)deleteVoiceResourceAssetKey;
- (id)suppressMessageUnderConditions;

@end
