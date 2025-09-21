@class NSData;

@interface CDASchemaCDAScoreBoosters : SISchemaInstrumentationMessage {
    struct { unsigned char deviceBoost : 1; unsigned char recentUnlockBoost : 1; unsigned char recentRaiseToWakeBoost : 1; unsigned char recentSiriRequestBoost : 1; unsigned char recentMotionBoost : 1; unsigned char recentPlaybackBoost : 1; unsigned char isTrump : 1; unsigned char trumpReason : 1; unsigned char recentAlarmBoost : 1; } _has;
}

@property (nonatomic) unsigned int deviceBoost;
@property (nonatomic) char hasDeviceBoost;
@property (nonatomic) unsigned int recentUnlockBoost;
@property (nonatomic) char hasRecentUnlockBoost;
@property (nonatomic) unsigned int recentRaiseToWakeBoost;
@property (nonatomic) char hasRecentRaiseToWakeBoost;
@property (nonatomic) unsigned int recentSiriRequestBoost;
@property (nonatomic) char hasRecentSiriRequestBoost;
@property (nonatomic) unsigned int recentMotionBoost;
@property (nonatomic) char hasRecentMotionBoost;
@property (nonatomic) unsigned int recentPlaybackBoost;
@property (nonatomic) char hasRecentPlaybackBoost;
@property (nonatomic) char isTrump;
@property (nonatomic) char hasIsTrump;
@property (nonatomic) int trumpReason;
@property (nonatomic) char hasTrumpReason;
@property (nonatomic) unsigned int recentAlarmBoost;
@property (nonatomic) char hasRecentAlarmBoost;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDeviceBoost;
- (void)deleteIsTrump;
- (void)deleteRecentAlarmBoost;
- (void)deleteRecentMotionBoost;
- (void)deleteRecentPlaybackBoost;
- (void)deleteRecentRaiseToWakeBoost;
- (void)deleteRecentSiriRequestBoost;
- (void)deleteRecentUnlockBoost;
- (void)deleteTrumpReason;
- (id)suppressMessageUnderConditions;

@end
