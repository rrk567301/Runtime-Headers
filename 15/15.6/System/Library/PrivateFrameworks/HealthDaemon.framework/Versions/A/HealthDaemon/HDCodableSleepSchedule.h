@class NSString, HDCodableSample;

@interface HDCodableSleepSchedule : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char bedHour : 1; unsigned char bedMinute : 1; unsigned char overrideDayIndex : 1; unsigned char wakeHour : 1; unsigned char wakeMinute : 1; unsigned char friday : 1; unsigned char monday : 1; unsigned char saturday : 1; unsigned char sunday : 1; unsigned char thursday : 1; unsigned char tuesday : 1; unsigned char wednesday : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasMonday;
@property (nonatomic) char monday;
@property (nonatomic) char hasTuesday;
@property (nonatomic) char tuesday;
@property (nonatomic) char hasWednesday;
@property (nonatomic) char wednesday;
@property (nonatomic) char hasThursday;
@property (nonatomic) char thursday;
@property (nonatomic) char hasFriday;
@property (nonatomic) char friday;
@property (nonatomic) char hasSaturday;
@property (nonatomic) char saturday;
@property (nonatomic) char hasSunday;
@property (nonatomic) char sunday;
@property (nonatomic) char hasWakeHour;
@property (nonatomic) long long wakeHour;
@property (nonatomic) char hasWakeMinute;
@property (nonatomic) long long wakeMinute;
@property (nonatomic) char hasBedHour;
@property (nonatomic) long long bedHour;
@property (nonatomic) char hasBedMinute;
@property (nonatomic) long long bedMinute;
@property (nonatomic) char hasOverrideDayIndex;
@property (nonatomic) long long overrideDayIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)applyToObject:(id)a0;
- (char)applyToObject:(id)a0 error:(out id *)a1;

@end
