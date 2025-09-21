@class NSArray, NSData;

@interface MHSchemaMHCoreSpeechPreprocessorCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char beepLocation : 1; unsigned char statsComputed : 1; unsigned char beepPower : 1; unsigned char signalPower : 1; unsigned char originalPower : 1; unsigned char absMaxVal : 1; unsigned char aboveNinetyFivepcOfMax : 1; unsigned char numTotalInputSamples : 1; unsigned char numTotalOutputSamples : 1; unsigned char initialContinousZeros : 1; unsigned char maxContinousZeros : 1; } _has;
}

@property (nonatomic) int beepLocation;
@property (nonatomic) char hasBeepLocation;
@property (nonatomic) int statsComputed;
@property (nonatomic) char hasStatsComputed;
@property (nonatomic) float beepPower;
@property (nonatomic) char hasBeepPower;
@property (nonatomic) float signalPower;
@property (nonatomic) char hasSignalPower;
@property (nonatomic) float originalPower;
@property (nonatomic) char hasOriginalPower;
@property (nonatomic) float absMaxVal;
@property (nonatomic) char hasAbsMaxVal;
@property (nonatomic) float aboveNinetyFivepcOfMax;
@property (nonatomic) char hasAboveNinetyFivepcOfMax;
@property (nonatomic) unsigned long long numTotalInputSamples;
@property (nonatomic) char hasNumTotalInputSamples;
@property (nonatomic) unsigned long long numTotalOutputSamples;
@property (nonatomic) char hasNumTotalOutputSamples;
@property (nonatomic) unsigned long long initialContinousZeros;
@property (nonatomic) char hasInitialContinousZeros;
@property (nonatomic) unsigned long long maxContinousZeros;
@property (nonatomic) char hasMaxContinousZeros;
@property (copy, nonatomic) NSArray *midSegmentContinousZeros;
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
- (void)deleteAbsMaxVal;
- (void)deleteBeepPower;
- (void)addMidSegmentContinousZeros:(id)a0;
- (void)clearMidSegmentContinousZeros;
- (void)deleteAboveNinetyFivepcOfMax;
- (void)deleteBeepLocation;
- (void)deleteInitialContinousZeros;
- (void)deleteMaxContinousZeros;
- (void)deleteMidSegmentContinousZeros;
- (void)deleteNumTotalInputSamples;
- (void)deleteNumTotalOutputSamples;
- (void)deleteOriginalPower;
- (void)deleteSignalPower;
- (void)deleteStatsComputed;
- (id)midSegmentContinousZerosAtIndex:(unsigned long long)a0;
- (unsigned long long)midSegmentContinousZerosCount;
- (id)suppressMessageUnderConditions;

@end
