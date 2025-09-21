@class NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionChoiceDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char choice : 1; unsigned char isUserSelectedChoice : 1; unsigned char isModelPredictedChoice : 1; unsigned char frequencyPercentage : 1; unsigned char recencySeconds : 1; unsigned char recencyRank : 1; unsigned char lastContiguousCount : 1; unsigned char locationAffinity300Meters : 1; unsigned char locationAffinity2500Meters : 1; unsigned char locationAffinity156Kilometers : 1; unsigned char locationFrequencyCount300Meters : 1; unsigned char locationFrequencyCount2500Meters : 1; unsigned char locationFrequencyCount156Kilometers : 1; } _has;
}

@property (nonatomic) long long choice;
@property (nonatomic) char hasChoice;
@property (nonatomic) int isUserSelectedChoice;
@property (nonatomic) char hasIsUserSelectedChoice;
@property (nonatomic) int isModelPredictedChoice;
@property (nonatomic) char hasIsModelPredictedChoice;
@property (nonatomic) float frequencyPercentage;
@property (nonatomic) char hasFrequencyPercentage;
@property (nonatomic) int recencySeconds;
@property (nonatomic) char hasRecencySeconds;
@property (nonatomic) int recencyRank;
@property (nonatomic) char hasRecencyRank;
@property (nonatomic) int lastContiguousCount;
@property (nonatomic) char hasLastContiguousCount;
@property (nonatomic) float locationAffinity300Meters;
@property (nonatomic) char hasLocationAffinity300Meters;
@property (nonatomic) float locationAffinity2500Meters;
@property (nonatomic) char hasLocationAffinity2500Meters;
@property (nonatomic) float locationAffinity156Kilometers;
@property (nonatomic) char hasLocationAffinity156Kilometers;
@property (nonatomic) long long locationFrequencyCount300Meters;
@property (nonatomic) char hasLocationFrequencyCount300Meters;
@property (nonatomic) long long locationFrequencyCount2500Meters;
@property (nonatomic) char hasLocationFrequencyCount2500Meters;
@property (nonatomic) long long locationFrequencyCount156Kilometers;
@property (nonatomic) char hasLocationFrequencyCount156Kilometers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLocationAffinity300Meters;
- (void)deleteChoice;
- (void)deleteFrequencyPercentage;
- (void)deleteIsModelPredictedChoice;
- (void)deleteIsUserSelectedChoice;
- (void)deleteLastContiguousCount;
- (void)deleteLocationAffinity156Kilometers;
- (void)deleteLocationAffinity2500Meters;
- (void)deleteLocationFrequencyCount156Kilometers;
- (void)deleteLocationFrequencyCount2500Meters;
- (void)deleteLocationFrequencyCount300Meters;
- (void)deleteRecencyRank;
- (void)deleteRecencySeconds;
- (id)suppressMessageUnderConditions;

@end
