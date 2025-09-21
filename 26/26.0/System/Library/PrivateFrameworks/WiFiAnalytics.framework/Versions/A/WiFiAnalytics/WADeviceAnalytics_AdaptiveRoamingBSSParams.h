@class NSString, NSArray;

@interface WADeviceAnalytics_AdaptiveRoamingBSSParams : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSArray *neighborChannels;
@property (nonatomic) short rssiRoamTrigger;
@property (retain, nonatomic) NSArray *neighbors;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBSS:(id)a0;

@end
