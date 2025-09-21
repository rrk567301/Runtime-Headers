@class NSString, HDCodableSample, NSData;

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char amm : 1; unsigned char duration : 1; unsigned char goal : 1; unsigned char goalType : 1; unsigned char isIndoorWorkout : 1; unsigned char isWatchWorkout : 1; unsigned char totalBasalEnergyBurnedInCanonicalUnit : 1; unsigned char totalDistanceInCanonicalUnit : 1; unsigned char totalEnergyBurnedInCanonicalUnit : 1; unsigned char type : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) char hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) char hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) char hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) char hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) char hasGoal;
@property (nonatomic) double goal;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) char hasIsWatchWorkout;
@property (nonatomic) long long isWatchWorkout;
@property (nonatomic) char hasIsIndoorWorkout;
@property (nonatomic) long long isIndoorWorkout;
@property (readonly, nonatomic) char hasDeviceManufacturer;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) char hasAmm;
@property (nonatomic) long long amm;
@property (readonly, nonatomic) char hasSeymourCatalogWorkoutIdentifier;
@property (retain, nonatomic) NSString *seymourCatalogWorkoutIdentifier;
@property (readonly, nonatomic) char hasSeymourMediaType;
@property (retain, nonatomic) NSString *seymourMediaType;

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
