@class NSDate;

@interface MockDateProvider : NSObject <StopwatchDateProvider>

@property (retain, nonatomic) NSDate *overrideDate;

+ (id)mockDate;

- (id)date;
- (void).cxx_destruct;
- (void)updateDate:(id)a0;

@end
