@class CALDate;

@interface OurOwnMutableNSDate : NSDate {
    CALDate *_calDate;
}

- (double)timeIntervalSinceReferenceDate;
- (void).cxx_destruct;
- (void)setCalDate:(id)a0;

@end
