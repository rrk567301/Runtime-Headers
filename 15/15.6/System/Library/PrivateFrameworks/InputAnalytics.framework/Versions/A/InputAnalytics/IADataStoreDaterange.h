@class NSDate;

@interface IADataStoreDaterange : IADataStoreObject

@property (readonly, nonatomic) NSDate *originDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) int bitfield;

+ (id)type;

- (void).cxx_destruct;
- (char)destroy;
- (void)setStartDate:(id)a0;
- (void)setOriginDate:(id)a0;
- (char)persist;
- (unsigned long long)usageFrequency;
- (char)_clearWithMask:(long long)a0;
- (unsigned long long)usedInLastMonth;
- (char)_updateStartDate;
- (unsigned long long)bitmaskForDayRangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (unsigned long long)bitmaskForLessThanDayN:(unsigned long long)a0;
- (char)clearAllUsage;
- (char)clearHistoricalUsage;
- (char)clearMonthlyUsage;
- (unsigned long long)everUsed;
- (id)initWithDatastoreHandle:(id)a0 andName:(id)a1 shouldBeCreated:(char)a2;
- (char)markToday;
- (void)setBitfield:(int)a0;
- (id)timesUsedInDayRangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)timesUsedInLastNDays:(unsigned long long)a0;
- (unsigned long long)usedInDayRangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (unsigned long long)usedInLastDay;
- (unsigned long long)usedInLastNDays:(unsigned long long)a0;
- (unsigned long long)usedInLastWeek;

@end
