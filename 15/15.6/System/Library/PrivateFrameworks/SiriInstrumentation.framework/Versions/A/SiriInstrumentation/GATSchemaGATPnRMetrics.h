@class NSData;

@interface GATSchemaGATPnRMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char startSiriSessionDurationInSeconds : 1; unsigned char generativeRequestDurationInSeconds : 1; unsigned char loadScreenContentDurationInSeconds : 1; unsigned char imageResizingDurationInSeconds : 1; unsigned char registerMediaDurationInSeconds : 1; unsigned char loadScreenContentRateKBsPerSecond : 1; unsigned char registerMediaRateKBsPerSecond : 1; unsigned char generativeResultCharactersCount : 1; unsigned char imageResizingRateKBsPerSecond : 1; } _has;
}

@property (nonatomic) double startSiriSessionDurationInSeconds;
@property (nonatomic) char hasStartSiriSessionDurationInSeconds;
@property (nonatomic) double generativeRequestDurationInSeconds;
@property (nonatomic) char hasGenerativeRequestDurationInSeconds;
@property (nonatomic) double loadScreenContentDurationInSeconds;
@property (nonatomic) char hasLoadScreenContentDurationInSeconds;
@property (nonatomic) double imageResizingDurationInSeconds;
@property (nonatomic) char hasImageResizingDurationInSeconds;
@property (nonatomic) double registerMediaDurationInSeconds;
@property (nonatomic) char hasRegisterMediaDurationInSeconds;
@property (nonatomic) double loadScreenContentRateKBsPerSecond;
@property (nonatomic) char hasLoadScreenContentRateKBsPerSecond;
@property (nonatomic) double registerMediaRateKBsPerSecond;
@property (nonatomic) char hasRegisterMediaRateKBsPerSecond;
@property (nonatomic) unsigned int generativeResultCharactersCount;
@property (nonatomic) char hasGenerativeResultCharactersCount;
@property (nonatomic) double imageResizingRateKBsPerSecond;
@property (nonatomic) char hasImageResizingRateKBsPerSecond;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGenerativeRequestDurationInSeconds;
- (void)deleteGenerativeResultCharactersCount;
- (void)deleteImageResizingDurationInSeconds;
- (void)deleteImageResizingRateKBsPerSecond;
- (void)deleteLoadScreenContentDurationInSeconds;
- (void)deleteLoadScreenContentRateKBsPerSecond;
- (void)deleteRegisterMediaDurationInSeconds;
- (void)deleteRegisterMediaRateKBsPerSecond;
- (void)deleteStartSiriSessionDurationInSeconds;
- (id)suppressMessageUnderConditions;

@end
