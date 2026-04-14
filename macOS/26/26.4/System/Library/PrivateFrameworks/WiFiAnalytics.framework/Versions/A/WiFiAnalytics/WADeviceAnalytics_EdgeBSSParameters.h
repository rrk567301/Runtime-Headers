@class NSString;

@interface WADeviceAnalytics_EdgeBSSParameters : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (nonatomic) BOOL isEdge;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) short manualLeaveCount;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBSS:(id)a0;

@end
