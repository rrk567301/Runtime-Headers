@class NSString;

@interface WADeviceAnalytics_EdgeBSSParameters : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (nonatomic) BOOL isEdge;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) short manualLeaveCount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBSS:(id)a0;

@end
