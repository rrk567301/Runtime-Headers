@class NSString, NSDate;

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) long long tv_sec;
@property (readonly, nonatomic) int tv_usec;
@property (readonly, nonatomic) int tz_minuteswest;
@property (readonly, nonatomic) int tz_dsttime;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long startNanoseconds;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endNanoseconds;
@property (readonly, nonatomic) unsigned long long durationMachContinuousTime;
@property (readonly, nonatomic) float durationSeconds;
@property (nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headerWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
+ (id)serializationTypeNumber;

- (id)copy;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (double)durationMs;
- (double)startMs;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)_containedObjectsFromArray:(id)a0;
- (char)_containsMCT:(unsigned long long)a0;
- (char)_containsTimeObject:(id)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(char)a2;
- (id)_descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1 asBegin:(char)a2;
- (id)_dictionaryRepresentationWithIsHumanReadable:(char)a0 shouldRedact:(char)a1;
- (char)_hasBeginTimeval;
- (char)_hasEndTimeval;
- (char)_populateTimeStruct:(struct time { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; } *)a0 withTimeval:(struct timeval { long long x0; int x1; } *)a1 withTZString:(id)a2;
- (id)_wallTimeStringWithTimeZone:(id)a0 isBegin:(char)a1;
- (char)beginTimeval:(struct timeval { long long x0; int x1; } *)a0;
- (char)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)beginWallTimeStringWithTimeZoneName:(id)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (double)endSeconds;
- (char)endTimeval:(struct timeval { long long x0; int x1; } *)a0;
- (char)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)endWallTimeStringWithTimeZoneName:(id)a0;
- (id)humanReadableDictionaryRepresentation;
- (id)humanReadableType;
- (id)initWithSubsystem:(id)a0 category:(id)a1 timebaseRatio:(double)a2;
- (id)serializeableDictionaryWithShouldRedact:(char)a0;
- (double)startSeconds;

@end
