@class NSArray, NSData;

@interface TTSSchemaTTSSpeechEnded : SISchemaInstrumentationMessage {
    struct { unsigned char synthesizedAudioDurationInSecond : 1; unsigned char synthesisLatencyInSecond : 1; unsigned char synthesisRealTimeFactor : 1; unsigned char promptCount : 1; } _has;
}

@property (nonatomic) float synthesizedAudioDurationInSecond;
@property (nonatomic) BOOL hasSynthesizedAudioDurationInSecond;
@property (nonatomic) float synthesisLatencyInSecond;
@property (nonatomic) BOOL hasSynthesisLatencyInSecond;
@property (nonatomic) float synthesisRealTimeFactor;
@property (nonatomic) BOOL hasSynthesisRealTimeFactor;
@property (nonatomic) unsigned int promptCount;
@property (nonatomic) BOOL hasPromptCount;
@property (copy, nonatomic) NSArray *errorCodes;
@property (copy, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearErrors;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;
- (unsigned long long)errorCodesCount;
- (void)clearErrorCodes;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (void)deleteErrors;
- (void)deletePromptCount;
- (void)deleteSynthesisLatencyInSecond;
- (void)deleteSynthesisRealTimeFactor;
- (void)deleteSynthesizedAudioDurationInSecond;
- (int)errorCodesAtIndex:(unsigned long long)a0;

@end
