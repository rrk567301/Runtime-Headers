@class NSArray, NSData;

@interface MHSchemaMHCoreSpeechPreprocessorCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char beepLocation : 1; unsigned char statsComputed : 1; unsigned char beepPower : 1; unsigned char signalPower : 1; unsigned char originalPower : 1; unsigned char absMaxVal : 1; unsigned char aboveNinetyFivepcOfMax : 1; unsigned char numTotalInputSamples : 1; unsigned char numTotalOutputSamples : 1; unsigned char initialContinousZeros : 1; unsigned char maxContinousZeros : 1; } _has;
}

@property (nonatomic) int beepLocation;
@property (nonatomic) BOOL hasBeepLocation;
@property (nonatomic) int statsComputed;
@property (nonatomic) BOOL hasStatsComputed;
@property (nonatomic) float beepPower;
@property (nonatomic) BOOL hasBeepPower;
@property (nonatomic) float signalPower;
@property (nonatomic) BOOL hasSignalPower;
@property (nonatomic) float originalPower;
@property (nonatomic) BOOL hasOriginalPower;
@property (nonatomic) float absMaxVal;
@property (nonatomic) BOOL hasAbsMaxVal;
@property (nonatomic) float aboveNinetyFivepcOfMax;
@property (nonatomic) BOOL hasAboveNinetyFivepcOfMax;
@property (nonatomic) unsigned long long numTotalInputSamples;
@property (nonatomic) BOOL hasNumTotalInputSamples;
@property (nonatomic) unsigned long long numTotalOutputSamples;
@property (nonatomic) BOOL hasNumTotalOutputSamples;
@property (nonatomic) unsigned long long initialContinousZeros;
@property (nonatomic) BOOL hasInitialContinousZeros;
@property (nonatomic) unsigned long long maxContinousZeros;
@property (nonatomic) BOOL hasMaxContinousZeros;
@property (copy, nonatomic) NSArray *midSegmentContinousZeros;
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
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBeepLocation;
- (void)deleteStatsComputed;
- (void)deleteBeepPower;
- (void)deleteSignalPower;
- (void)deleteOriginalPower;
- (void)deleteAbsMaxVal;
- (void)deleteAboveNinetyFivepcOfMax;
- (void)deleteNumTotalInputSamples;
- (void)deleteNumTotalOutputSamples;
- (void)deleteInitialContinousZeros;
- (void)deleteMaxContinousZeros;
- (void)clearMidSegmentContinousZeros;
- (void)deleteMidSegmentContinousZeros;
- (void)addMidSegmentContinousZeros:(id)a0;
- (unsigned long long)midSegmentContinousZerosCount;
- (id)midSegmentContinousZerosAtIndex:(unsigned long long)a0;

@end
