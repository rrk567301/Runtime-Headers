@class NSString, NSSet, NSDictionary;

@interface WADeviceAnalyticsNetwork : NSObject

@property (readonly) NSString *ssid;
@property (readonly) BOOL isHome;
@property (readonly) NSSet *lans;
@property (readonly) NSDictionary *bssidsAndLans;

+ (id)networkWith:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
