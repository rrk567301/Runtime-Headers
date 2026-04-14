@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (int)tz_dsttime;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)number2Value;
- (id)debugDescription;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (int)tv_usec;
- (BOOL)intersectsInterval:(id)a0;
- (BOOL)telemetryEnabled;
- (float)durationSeconds;
- (id)initWithDictionary:(id)a0;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)tv_sec;
- (BOOL)_hasBeginTimeval;
- (id)string2Name;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)string2Value;
- (id)number1Value;
- (void).cxx_destruct;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (int)tz_minuteswest;
- (unsigned long long)hash;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)scope;
- (unsigned long long)startMachContinuousTime;
- (id)string1Value;
- (id)_eventDescriptions;
- (id)number2Name;
- (id)string1Name;
- (id)humanReadableType;
- (BOOL)_hasEndTimeval;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)number1Name;
- (unsigned long long)endMachContinuousTime;

@end
