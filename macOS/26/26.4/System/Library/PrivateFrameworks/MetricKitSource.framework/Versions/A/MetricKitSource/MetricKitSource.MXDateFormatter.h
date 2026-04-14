@interface MetricKitSource.MXDateFormatter : NSObject

@property (class, nonatomic, readonly) double oneDay;

+ (id)stringFromDate:(id)a0 format:(long long)a1;
+ (id)dateFromString:(id)a0 format:(long long)a1;
+ (id)dateTruncatedToMinute:(id)a0;

- (id)init;

@end
