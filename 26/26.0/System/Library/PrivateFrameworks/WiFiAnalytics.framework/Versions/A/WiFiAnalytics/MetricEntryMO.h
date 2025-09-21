@class NSData, NSDate;

@interface MetricEntryMO : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSData *eventMessage;

+ (id)fetchRequest;
+ (unsigned long long)metricEntryCount:(unsigned long long)a0 moc:(id)a1;

@end
