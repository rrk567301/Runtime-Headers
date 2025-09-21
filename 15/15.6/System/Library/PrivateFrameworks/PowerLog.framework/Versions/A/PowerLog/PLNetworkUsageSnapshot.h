@class NSString, NSDate;

@interface PLNetworkUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *cellType;
@property (retain) NSString *quality;
@property (retain) NSString *wifi;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (double)computeEnergyDiff:(id)a0;
- (double)computeEnergyDiffUntilNow:(char)a0;
- (void)snapshotNetworkState;

@end
