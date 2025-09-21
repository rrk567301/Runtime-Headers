@class VCSDate;

@interface VCSEvent : VCSEntity

@property (retain, nonatomic) VCSDate *startDate;
@property (retain, nonatomic) VCSDate *endDate;
@property (nonatomic) char fullDayEvent;

- (unsigned long long)entityType;
- (void)ensureDurationAlarms;
- (char)isValidStatus:(unsigned long long)a0;

@end
