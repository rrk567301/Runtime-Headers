@class NSString, NSData;

@interface SISchemaPNRTextToSpeechRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char isWarmStart : 1; unsigned char isSynthesisCached : 1; unsigned char sourceOfTTS : 1; unsigned char speechError : 1; } _has;
}

@property (copy, nonatomic) NSString *voiceAssetKey;
@property (nonatomic) BOOL hasVoiceAssetKey;
@property (copy, nonatomic) NSString *voiceResourceAssetKey;
@property (nonatomic) BOOL hasVoiceResourceAssetKey;
@property (nonatomic) BOOL isWarmStart;
@property (nonatomic) BOOL hasIsWarmStart;
@property (nonatomic) BOOL isSynthesisCached;
@property (nonatomic) BOOL hasIsSynthesisCached;
@property (nonatomic) int sourceOfTTS;
@property (nonatomic) BOOL hasSourceOfTTS;
@property (nonatomic) int speechError;
@property (nonatomic) BOOL hasSpeechError;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteVoiceAssetKey;
- (void)deleteVoiceResourceAssetKey;
- (void)deleteIsWarmStart;
- (void)deleteIsSynthesisCached;
- (void)deleteSourceOfTTS;
- (void)deleteSpeechError;

@end
