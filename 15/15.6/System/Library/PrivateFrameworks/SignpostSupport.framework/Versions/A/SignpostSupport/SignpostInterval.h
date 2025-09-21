@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) char isSyntheticInterval;

+ (id)serializationTypeNumber;

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)scope;
- (float)durationSeconds;
- (int)tv_usec;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(char)a2;
- (id)_dictionaryRepresentationWithIsHumanReadable:(char)a0 shouldRedact:(char)a1;
- (id)_eventDescriptions;
- (char)_hasBeginTimeval;
- (char)_hasEndTimeval;
- (char)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (char)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)humanReadableType;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (char)intersectsInterval:(id)a0;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (unsigned long long)startMachContinuousTime;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (char)telemetryEnabled;
- (long long)tv_sec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

@end
