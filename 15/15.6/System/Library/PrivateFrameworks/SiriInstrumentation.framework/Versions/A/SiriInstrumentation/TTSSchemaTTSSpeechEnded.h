@class NSArray, NSData;

@interface TTSSchemaTTSSpeechEnded : SISchemaInstrumentationMessage {
    struct { unsigned char synthesizedAudioDurationInSecond : 1; unsigned char synthesisLatencyInSecond : 1; unsigned char synthesisRealTimeFactor : 1; unsigned char promptCount : 1; } _has;
}

@property (nonatomic) float synthesizedAudioDurationInSecond;
@property (nonatomic) char hasSynthesizedAudioDurationInSecond;
@property (nonatomic) float synthesisLatencyInSecond;
@property (nonatomic) char hasSynthesisLatencyInSecond;
@property (nonatomic) float synthesisRealTimeFactor;
@property (nonatomic) char hasSynthesisRealTimeFactor;
@property (nonatomic) unsigned int promptCount;
@property (nonatomic) char hasPromptCount;
@property (copy, nonatomic) NSArray *errorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)errorCodesCount;
- (void)clearErrorCodes;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (void)deletePromptCount;
- (void)deleteSynthesisLatencyInSecond;
- (void)deleteSynthesisRealTimeFactor;
- (void)deleteSynthesizedAudioDurationInSecond;
- (int)errorCodesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
