@class NSString, HDCodableSample, NSData;

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char activeHours : 1; unsigned char activeHoursGoal : 1; unsigned char amm : 1; unsigned char briskMinutes : 1; unsigned char briskMinutesGoal : 1; unsigned char date : 1; unsigned char energyBurned : 1; unsigned char energyBurnedGoal : 1; unsigned char mmg : 1; unsigned char mmv : 1; unsigned char pushCount : 1; unsigned char snapshotIndex : 1; unsigned char stepCount : 1; unsigned char timeZoneOffsetFromUTCForNoon : 1; unsigned char uploadedDate : 1; unsigned char walkingAndRunningDistance : 1; unsigned char wheelchairUse : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) char hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (readonly, nonatomic) char hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) char hasSnapshotIndex;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic) char hasDate;
@property (nonatomic) double date;
@property (nonatomic) char hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) long long timeZoneOffsetFromUTCForNoon;
@property (nonatomic) char hasEnergyBurned;
@property (nonatomic) double energyBurned;
@property (nonatomic) char hasEnergyBurnedGoal;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) char hasBriskMinutes;
@property (nonatomic) double briskMinutes;
@property (nonatomic) char hasBriskMinutesGoal;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) char hasActiveHours;
@property (nonatomic) double activeHours;
@property (nonatomic) char hasActiveHoursGoal;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) char hasWalkingAndRunningDistance;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) char hasStepCount;
@property (nonatomic) double stepCount;
@property (nonatomic) char hasPushCount;
@property (nonatomic) double pushCount;
@property (nonatomic) char hasWheelchairUse;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) char hasUploadedDate;
@property (nonatomic) double uploadedDate;
@property (nonatomic) char hasMmv;
@property (nonatomic) double mmv;
@property (nonatomic) char hasMmg;
@property (nonatomic) double mmg;
@property (nonatomic) char hasAmm;
@property (nonatomic) long long amm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)applyToObject:(id)a0;

@end
