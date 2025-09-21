@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) id<CALNCoreLocationProvider> coreLocationProvider;
@property (readonly, nonatomic) char allowsLocationAlerts;

- (void).cxx_destruct;
- (void)markAsHavingReceivedLocation;
- (id)initWithCoreLocationProvider:(id)a0;

@end
