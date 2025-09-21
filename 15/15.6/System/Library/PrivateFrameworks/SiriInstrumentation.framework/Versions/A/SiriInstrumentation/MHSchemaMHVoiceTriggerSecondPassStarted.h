@class NSArray, NSData;

@interface MHSchemaMHVoiceTriggerSecondPassStarted : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassDetectedChannel : 1; unsigned char firstPassScore : 1; unsigned char firstPassOnsetChannel : 1; unsigned char firstPassOnsetScore : 1; unsigned char firstPassChannelSelectionDelayNs : 1; unsigned char firstPassMasterChannelScoreBoost : 1; unsigned char firstPassStartSampleCount : 1; unsigned char firstPassEndSampleCount : 1; unsigned char firstPassFireSampleCount : 1; unsigned char firstPassTriggerSource : 1; unsigned char earlyDetectFiredTimeOffsetInNs : 1; unsigned char earlyDetectFiredTime : 1; unsigned char firstPassPrimaryChannelScoreBoost : 1; unsigned char firstPassInfoDispatchTimeInNs : 1; unsigned char firstPassInfoReceptionTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned int firstPassDetectedChannel;
@property (nonatomic) char hasFirstPassDetectedChannel;
@property (nonatomic) float firstPassScore;
@property (nonatomic) char hasFirstPassScore;
@property (nonatomic) unsigned int firstPassOnsetChannel;
@property (nonatomic) char hasFirstPassOnsetChannel;
@property (nonatomic) float firstPassOnsetScore;
@property (nonatomic) char hasFirstPassOnsetScore;
@property (copy, nonatomic) NSArray *channelSelectionScores;
@property (nonatomic) unsigned long long firstPassChannelSelectionDelayNs;
@property (nonatomic) char hasFirstPassChannelSelectionDelayNs;
@property (nonatomic) float firstPassMasterChannelScoreBoost;
@property (nonatomic) char hasFirstPassMasterChannelScoreBoost;
@property (nonatomic) unsigned long long firstPassStartSampleCount;
@property (nonatomic) char hasFirstPassStartSampleCount;
@property (nonatomic) unsigned long long firstPassEndSampleCount;
@property (nonatomic) char hasFirstPassEndSampleCount;
@property (nonatomic) unsigned long long firstPassFireSampleCount;
@property (nonatomic) char hasFirstPassFireSampleCount;
@property (nonatomic) int firstPassTriggerSource;
@property (nonatomic) char hasFirstPassTriggerSource;
@property (nonatomic) unsigned long long earlyDetectFiredTimeOffsetInNs;
@property (nonatomic) char hasEarlyDetectFiredTimeOffsetInNs;
@property (nonatomic) float earlyDetectFiredTime;
@property (nonatomic) char hasEarlyDetectFiredTime;
@property (nonatomic) float firstPassPrimaryChannelScoreBoost;
@property (nonatomic) char hasFirstPassPrimaryChannelScoreBoost;
@property (nonatomic) unsigned long long firstPassInfoDispatchTimeInNs;
@property (nonatomic) char hasFirstPassInfoDispatchTimeInNs;
@property (nonatomic) unsigned long long firstPassInfoReceptionTimeInNs;
@property (nonatomic) char hasFirstPassInfoReceptionTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFirstPassStartSampleCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addChannelSelectionScores:(id)a0;
- (id)channelSelectionScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)channelSelectionScoresCount;
- (void)clearChannelSelectionScores;
- (void)deleteChannelSelectionScores;
- (void)deleteEarlyDetectFiredTime;
- (void)deleteEarlyDetectFiredTimeOffsetInNs;
- (void)deleteFirstPassChannelSelectionDelayNs;
- (void)deleteFirstPassDetectedChannel;
- (void)deleteFirstPassEndSampleCount;
- (void)deleteFirstPassFireSampleCount;
- (void)deleteFirstPassInfoDispatchTimeInNs;
- (void)deleteFirstPassInfoReceptionTimeInNs;
- (void)deleteFirstPassMasterChannelScoreBoost;
- (void)deleteFirstPassOnsetChannel;
- (void)deleteFirstPassOnsetScore;
- (void)deleteFirstPassPrimaryChannelScoreBoost;
- (void)deleteFirstPassScore;
- (void)deleteFirstPassTriggerSource;
- (id)suppressMessageUnderConditions;

@end
