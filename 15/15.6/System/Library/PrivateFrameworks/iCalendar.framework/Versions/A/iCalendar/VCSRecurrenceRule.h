@class NSArray, VCSDate, NSString, NSMutableArray;

@interface VCSRecurrenceRule : NSObject <VCSDictifiable>

@property (readonly, nonatomic) unsigned long long recurrenceType;
@property (nonatomic) long long interval;
@property (nonatomic) char hasDuration;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *dayNumberList;
@property (retain, nonatomic) NSArray *monthList;
@property (retain, nonatomic) NSArray *dayList;
@property (retain, nonatomic) NSMutableArray *occurrenceList;
@property (retain, nonatomic) NSMutableArray *weekdayList;
@property (retain, nonatomic) VCSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithString:(const char *)a0;
- (char)decodeInterval:(const char **)a0;
- (char)decodeDuration:(const char **)a0;
- (id)dictify;
- (id)_decodeNumberList:(const char **)a0 min:(long long)a1 max:(long long)a2;
- (char)decodeDaily:(const char **)a0;
- (char)decodeDigits:(const char **)a0 withResult:(long long *)a1;
- (char)decodeMonthlyByDay:(const char **)a0;
- (char)decodeMonthlyByPos:(const char **)a0;
- (char)decodeOccurrenceList:(const char **)a0;
- (char)decodeWeekdayList:(const char **)a0;
- (char)decodeWeekly:(const char **)a0;
- (char)decodeYearlyByDay:(const char **)a0;
- (char)decodeYearlyByMonth:(const char **)a0;

@end
