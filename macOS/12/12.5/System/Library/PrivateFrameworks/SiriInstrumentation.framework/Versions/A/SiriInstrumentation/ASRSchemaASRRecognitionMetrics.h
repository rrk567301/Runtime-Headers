@class NSArray, NSString, NSData, ASRSchemaASRRecognizerComponents;

@interface ASRSchemaASRRecognitionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char personalizedLanguageModelAgeInNs : 1; unsigned char personalizedLanguageModelWeight : 1; unsigned char averageActiveTokensPerFrame : 1; unsigned char signalToNoiseRatioInDecibels : 1; unsigned char recognitionDurationInNs : 1; unsigned char audioDurationInNs : 1; unsigned char eagerEnabled : 1; unsigned char utteranceDetectionEnabled : 1; unsigned char utteranceConcatenationEnabled : 1; unsigned char continuousListeningEnabled : 1; unsigned char eagerCustomerPerceivedLatencyInNs : 1; unsigned char cpuRealTimeFactor : 1; unsigned char numLanguageModelEnrollmentDataStreams : 1; } _has;
}

@property (nonatomic) unsigned long long personalizedLanguageModelAgeInNs;
@property (nonatomic) BOOL hasPersonalizedLanguageModelAgeInNs;
@property (nonatomic) float personalizedLanguageModelWeight;
@property (nonatomic) BOOL hasPersonalizedLanguageModelWeight;
@property (retain, nonatomic) ASRSchemaASRRecognizerComponents *recognizerComponents;
@property (nonatomic) BOOL hasRecognizerComponents;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float signalToNoiseRatioInDecibels;
@property (nonatomic) BOOL hasSignalToNoiseRatioInDecibels;
@property (nonatomic) unsigned long long recognitionDurationInNs;
@property (nonatomic) BOOL hasRecognitionDurationInNs;
@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL eagerEnabled;
@property (nonatomic) BOOL hasEagerEnabled;
@property (nonatomic) BOOL utteranceDetectionEnabled;
@property (nonatomic) BOOL hasUtteranceDetectionEnabled;
@property (nonatomic) BOOL utteranceConcatenationEnabled;
@property (nonatomic) BOOL hasUtteranceConcatenationEnabled;
@property (nonatomic) BOOL continuousListeningEnabled;
@property (nonatomic) BOOL hasContinuousListeningEnabled;
@property (nonatomic) unsigned long long eagerCustomerPerceivedLatencyInNs;
@property (nonatomic) BOOL hasEagerCustomerPerceivedLatencyInNs;
@property (nonatomic) float cpuRealTimeFactor;
@property (nonatomic) BOOL hasCpuRealTimeFactor;
@property (nonatomic) unsigned int numLanguageModelEnrollmentDataStreams;
@property (nonatomic) BOOL hasNumLanguageModelEnrollmentDataStreams;
@property (copy, nonatomic) NSString *phoneticMatchDecoderName;
@property (nonatomic) BOOL hasPhoneticMatchDecoderName;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearLanguageModelInterpolationWeights;
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)deletePersonalizedLanguageModelAgeInNs;
- (void)deletePersonalizedLanguageModelWeight;
- (void)deleteRecognizerComponents;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteLanguageModelInterpolationWeights;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;
- (void)deleteSignalToNoiseRatioInDecibels;
- (void)deleteRecognitionDurationInNs;
- (void)deleteAudioDurationInNs;
- (void)deleteEagerEnabled;
- (void)deleteUtteranceDetectionEnabled;
- (void)deleteUtteranceConcatenationEnabled;
- (void)deleteContinuousListeningEnabled;
- (void)deleteEagerCustomerPerceivedLatencyInNs;
- (void)deleteCpuRealTimeFactor;
- (void)deleteNumLanguageModelEnrollmentDataStreams;
- (void)deletePhoneticMatchDecoderName;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
