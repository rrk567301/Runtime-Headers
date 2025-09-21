@class NSString, HDCodableWorkoutActivity, NSMutableArray, HDCodableSample;

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char duration : 1; unsigned char goal : 1; unsigned char goalType : 1; unsigned char totalBasalEnergyBurnedInCanonicalUnit : 1; unsigned char totalDistanceInCanonicalUnit : 1; unsigned char totalEnergyBurnedInCanonicalUnit : 1; unsigned char totalFlightsClimbedInCanonicalUnit : 1; unsigned char totalSwimmingStrokeCountInCanonicalUnit : 1; unsigned char type : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) char hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) char hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) char hasGoal;
@property (nonatomic) double goal;
@property (nonatomic) char hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) char hasTotalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) double totalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) char hasTotalFlightsClimbedInCanonicalUnit;
@property (nonatomic) double totalFlightsClimbedInCanonicalUnit;
@property (readonly, nonatomic) char hasPrimaryActivity;
@property (retain, nonatomic) HDCodableWorkoutActivity *primaryActivity;
@property (retain, nonatomic) NSMutableArray *subActivities;

+ (Class)eventsType;
+ (Class)subActivitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (void)addSubActivities:(id)a0;
- (char)applyToObject:(id)a0;
- (void)clearSubActivities;
- (id)subActivitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)subActivitiesCount;

@end
