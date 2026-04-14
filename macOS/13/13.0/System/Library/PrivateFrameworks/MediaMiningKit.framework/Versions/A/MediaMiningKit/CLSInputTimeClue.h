@class NSArray, NSSet, NSDate;

@interface CLSInputTimeClue : CLSInputClue {
    NSArray *_dateComponentsArray;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
}

@property (copy, nonatomic) NSArray *events;

+ (id)clueWithDates:(id)a0;

- (id)description;
- (double)timeInterval;
- (void).cxx_destruct;
- (id)localStartDate;
- (id)localEndDate;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)universalDates;
- (BOOL)isEqualToClue:(id)a0;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (id)localDates;
- (unsigned long long)numberOfDays;
- (void)_computeDateProperties;

@end
