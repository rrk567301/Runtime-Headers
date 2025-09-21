@class NSString;

@interface WADeviceAnalytics_BandsInNetwork : NSObject

@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) BOOL has2GHz;
@property (nonatomic) BOOL has5GHz;
@property (nonatomic) BOOL has6GHz;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNetwork:(id)a0;

@end
