@protocol CALNCoreLocationProvider;

@interface CALNCalendarCoreLocationManager : NSObject

@property (readonly, nonatomic) id<CALNCoreLocationProvider> coreLocationProvider;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;

- (void)markAsHavingReceivedLocation;
- (void).cxx_destruct;
- (id)initWithCoreLocationProvider:(id)a0;

@end
