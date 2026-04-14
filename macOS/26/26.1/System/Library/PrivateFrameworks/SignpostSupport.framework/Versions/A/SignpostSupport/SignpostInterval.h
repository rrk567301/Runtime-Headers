@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (long long)tv_sec;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)string1Name;
- (BOOL)_hasEndTimeval;
- (id)string2Value;
- (id)string1Value;
- (unsigned long long)hash;
- (unsigned long long)scope;
- (unsigned long long)durationMachContinuousTime;
- (id)number1Value;
- (id)humanReadableType;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)_eventDescriptions;
- (float)durationSeconds;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (unsigned long long)endMachContinuousTime;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (int)tz_minuteswest;
- (BOOL)intersectsInterval:(id)a0;
- (id)number1Name;
- (id)number2Value;
- (id)string2Name;
- (id)initWithDictionary:(id)a0;
- (int)tv_usec;
- (int)tz_dsttime;
- (BOOL)_hasBeginTimeval;
- (void).cxx_destruct;
- (id)number2Name;
- (unsigned long long)startMachContinuousTime;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)debugDescription;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)telemetryEnabled;

@end
