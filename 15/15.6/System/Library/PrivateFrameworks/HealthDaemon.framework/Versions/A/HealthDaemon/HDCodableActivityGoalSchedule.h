@class NSString, HDCodableSample;

@interface HDCodableActivityGoalSchedule : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char fridayGoal : 1; unsigned char goalType : 1; unsigned char mondayGoal : 1; unsigned char saturdayGoal : 1; unsigned char sundayGoal : 1; unsigned char thursdayGoal : 1; unsigned char tuesdayGoal : 1; unsigned char wednesdayGoal : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasGoalType;
@property (nonatomic) long long goalType;
@property (readonly, nonatomic) char hasUnitString;
@property (retain, nonatomic) NSString *unitString;
@property (nonatomic) char hasMondayGoal;
@property (nonatomic) double mondayGoal;
@property (nonatomic) char hasTuesdayGoal;
@property (nonatomic) double tuesdayGoal;
@property (nonatomic) char hasWednesdayGoal;
@property (nonatomic) double wednesdayGoal;
@property (nonatomic) char hasThursdayGoal;
@property (nonatomic) double thursdayGoal;
@property (nonatomic) char hasFridayGoal;
@property (nonatomic) double fridayGoal;
@property (nonatomic) char hasSaturdayGoal;
@property (nonatomic) double saturdayGoal;
@property (nonatomic) char hasSundayGoal;
@property (nonatomic) double sundayGoal;

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
