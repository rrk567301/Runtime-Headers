@class NSString, NSArray;

@interface WADeviceAnalytics_AdaptiveRoamingBSSParams : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSArray *neighborChannels;
@property (nonatomic) short rssiRoamTrigger;
@property (retain, nonatomic) NSArray *neighbors;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBSS:(id)a0;

@end
