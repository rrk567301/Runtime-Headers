@class NSString, SignpostEvent;

@interface SignpostInterval : SignpostObject

@property (readonly, nonatomic) NSString *_intervalTypeString;
@property (retain, nonatomic) SignpostEvent *beginEvent;
@property (retain, nonatomic) SignpostEvent *endEvent;
@property (readonly, nonatomic) BOOL isSyntheticInterval;

+ (id)serializationTypeNumber;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)scope;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)humanReadableType;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (void)_adjustBeginTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (void)_adjustEndTimeVal:(struct timeval { long long x0; int x1; } *)a0;
- (BOOL)_hasBeginTimeval;
- (BOOL)_hasEndTimeval;
- (BOOL)beginTimezone:(struct timezone { int x0; int x1; } *)a0;
- (BOOL)endTimezone:(struct timezone { int x0; int x1; } *)a0;
- (id)descriptionWithTimeFormat:(unsigned long long)a0 verbosity:(unsigned char)a1;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_minuteswest;
- (int)tz_dsttime;
- (BOOL)telemetryEnabled;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (id)initWithBeginEvent:(id)a0 endEvent:(id)a1;
- (id)_eventDescriptions;

@end
