@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (unsigned long long)endMachContinuousTime;
- (id)number1Name;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)debugDescription;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)string2Name;
- (unsigned long long)scope;
- (BOOL)intersectsInterval:(id)a0;
- (id)number1Value;
- (BOOL)_hasEndTimeval;
- (id)string2Value;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)number2Value;
- (id)string1Value;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (BOOL)_hasBeginTimeval;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (int)tz_dsttime;
- (BOOL)telemetryEnabled;
- (void).cxx_destruct;
- (long long)tv_sec;
- (int)tz_minuteswest;
- (id)humanReadableType;
- (int)tv_usec;
- (float)durationSeconds;
- (id)initWithDictionary:(id)a0;
- (id)_eventDescriptions;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)durationMachContinuousTime;
- (id)string1Name;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)number2Name;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;

@end
