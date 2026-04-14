@class SRResources, NSCalendar, NSDictionary, NSSet, NSString, NSMutableArray;

@interface QPDatePatternMatcher : NSObject {
    struct shared_ptr<QP::ParserConfiguration> { struct ParserConfiguration *__ptr_; struct __shared_weak_count *__cntrl_; } _config;
    SRResources *_resources;
    NSString *_loadedLocale;
}

@property (retain, nonatomic) NSMutableArray *rules;
@property (retain, nonatomic) NSDictionary *defaults;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDictionary *weekdayMap;
@property (retain, nonatomic) NSDictionary *monthMap;
@property (retain, nonatomic) NSDictionary *numberWordMap;
@property (retain, nonatomic) NSDictionary *unitMap;
@property (retain, nonatomic) NSSet *directionPositive;
@property (retain, nonatomic) NSSet *directionNegative;
@property (retain, nonatomic) NSSet *directionNeutral;
@property (retain, nonatomic) NSDictionary *directionPhrases;
@property (retain, nonatomic) NSDictionary *holidayDefs;
@property (retain, nonatomic) NSDictionary *holidayAliasToKey;

+ (id)captureNamesInPattern:(id)a0;

- (id)initWithConfiguration:(struct shared_ptr<QP::ParserConfiguration> { struct ParserConfiguration *x0; struct __shared_weak_count *x1; })a0;
- (id)assetURL;
- (void)configure:(id)a0;
- (void).cxx_destruct;
- (struct __CFLocale { } *)locale;
- (id).cxx_construct;
- (id)dateFromAction:(id)a0 onDate:(id)a1 captures:(id)a2;
- (long long)numberFromWord:(id)a0;
- (id)startOfQuarter:(id)a0;
- (id)addUnit:(id)a0 value:(long long)a1 toDate:(id)a2;
- (id)applyOffsets:(id)a0 withCaptures:(id)a1 anchor:(id)a2 isStart:(BOOL)a3 lastUnit:(id *)a4;
- (id)applyUnit:(id)a0 value:(long long)a1 direction:(long long)a2 toDate:(id)a3 isStart:(BOOL)a4;
- (id)assetURLFromCustomBundle;
- (id)assetURLFromSpotlightResources;
- (id)buildCapturesFromMatch:(id)a0 names:(id)a1 inString:(id)a2;
- (id)buildHolidayAliasMap:(id)a0;
- (id)ceilToHour:(id)a0;
- (id)clampDate:(id)a0 unit:(id)a1 byBoundary:(id)a2 captures:(id)a3 isStart:(BOOL)a4;
- (id)clampToDaypart:(id)a0 onDate:(id)a1 isStart:(BOOL)a2;
- (id)componentsFromClockString:(id)a0 anchor:(id)a1;
- (long long)directionFromString:(id)a0;
- (id)endOfDay:(id)a0;
- (id)endOfMonth:(id)a0;
- (id)endOfQuarter:(id)a0;
- (id)endOfWeek:(id)a0;
- (id)endOfYear:(id)a0;
- (id)floorToHour:(id)a0;
- (id)handleFortnightWithOffsetValue:(long long)a0 direction:(long long)a1 fromDate:(id)a2 isStart:(BOOL)a3;
- (id)holidayKeyForToken:(id)a0;
- (BOOL)loadDatePatterns;
- (long long)monthFromName:(id)a0;
- (id)moveToHolidayKey:(id)a0 occurrences:(long long)a1 direction:(long long)a2 fromDate:(id)a3;
- (id)moveToMonth:(long long)a0 occurrences:(long long)a1 direction:(long long)a2 fromDate:(id)a3;
- (id)moveToWeekday:(long long)a0 occurrences:(long long)a1 direction:(long long)a2 fromDate:(id)a3;
- (id)normalizeUnit:(id)a0;
- (id)normalizedNumberMapFromDict:(id)a0;
- (id)normalizedSetFromArray:(id)a0;
- (id)normalizedStringMapFromDict:(id)a0;
- (id)parseOffsets:(id)a0;
- (id)relativeClampingBasedOnOffsetUnit:(id)a0 boundaryUnit:(id)a1 toDate:(id)a2 isStart:(BOOL)a3;
- (id)resolveBoundary:(id)a0 captures:(id)a1;
- (id)resolveValue:(id)a0 captures:(id)a1;
- (id)startOfDay:(id)a0;
- (id)startOfMonth:(id)a0;
- (id)startOfWeek:(id)a0;
- (id)startOfYear:(id)a0;
- (id)translate:(id)a0 referenceDate:(id)a1;
- (long long)weekdayFromName:(id)a0;
- (id)weekendEndForDate:(id)a0;
- (id)weekendStartForDate:(id)a0;

@end
