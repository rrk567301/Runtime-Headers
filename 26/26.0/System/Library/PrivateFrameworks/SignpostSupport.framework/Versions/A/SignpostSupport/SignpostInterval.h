@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (int)tv_usec;
- (unsigned long long)durationMachContinuousTime;
- (id)string1Value;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)initWithDictionary:(id)a0;
- (long long)tv_sec;
- (unsigned long long)scope;
- (id)debugDescription;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)string2Value;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)number2Value;
- (id)number2Name;
- (id)number1Name;
- (BOOL)_hasEndTimeval;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (int)tz_minuteswest;
- (id)string1Name;
- (float)durationSeconds;
- (int)tz_dsttime;
- (BOOL)intersectsInterval:(id)a0;
- (id)string2Name;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (unsigned long long)endMachContinuousTime;
- (BOOL)_hasBeginTimeval;
- (BOOL)telemetryEnabled;
- (unsigned long long)hash;
- (id)humanReadableType;
- (BOOL)isEqual:(id)a0;
- (id)_eventDescriptions;
- (void).cxx_destruct;
- (id)number1Value;
- (unsigned long long)startMachContinuousTime;

@end
