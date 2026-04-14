@class NSString, HKCalendarCache, NSDate;

@interface HKAnalyticsEnvironmentDataSource : NSObject

@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKCalendarCache *calendarCache;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityEnabled;
@property (readonly, nonatomic) NSString *activePairedDeviceProductType;

- (id)init;
- (void).cxx_destruct;

@end
