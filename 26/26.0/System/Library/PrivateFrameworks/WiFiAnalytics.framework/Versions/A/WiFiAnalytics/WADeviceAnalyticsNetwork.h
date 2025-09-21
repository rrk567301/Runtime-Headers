@class NSString, NSSet, NSDictionary;

@interface WADeviceAnalyticsNetwork : NSObject

@property (readonly) NSString *ssid;
@property (readonly) BOOL isHome;
@property (readonly) NSSet *lans;
@property (readonly) NSDictionary *bssidsAndLans;

+ (id)networkWith:(id)a0;

- (id)description;
- (id)initWith:(id)a0;
- (void).cxx_destruct;

@end
