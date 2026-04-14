@class NSString, NSDate;

@interface PLNetworkUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *cellType;
@property (retain) NSString *quality;
@property (retain) NSString *wifi;

- (void).cxx_destruct;
- (id)description;
- (double)computeEnergyDiff:(id)a0;
- (id)initWithInfo:(id)a0;
- (double)computeEnergyDiffUntilNow:(BOOL)a0;
- (void)snapshotNetworkState;

@end
