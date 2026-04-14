@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (unsigned long long)scope;
- (id)string1Value;
- (id)number1Name;
- (unsigned long long)startMachContinuousTime;
- (BOOL)intersectsInterval:(id)a0;
- (unsigned long long)hash;
- (BOOL)_hasBeginTimeval;
- (BOOL)telemetryEnabled;
- (BOOL)isEqual:(id)a0;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)debugDescription;
- (id)string2Value;
- (BOOL)_hasEndTimeval;
- (id)string2Name;
- (void).cxx_destruct;
- (float)durationSeconds;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (id)_eventDescriptions;
- (id)number1Value;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)initWithDictionary:(id)a0;
- (int)tz_minuteswest;
- (id)number2Name;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (id)string1Name;
- (id)humanReadableType;
- (id)number2Value;

@end
