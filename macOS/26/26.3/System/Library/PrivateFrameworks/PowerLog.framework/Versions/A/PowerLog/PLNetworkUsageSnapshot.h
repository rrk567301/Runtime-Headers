@class NSString, NSDate;

@interface PLNetworkUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *cellType;
@property (retain) NSString *quality;
@property (retain) NSString *wifi;

- (id)description;
- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (double)computeEnergyDiff:(id)a0;
- (double)computeEnergyDiffUntilNow:(BOOL)a0;
- (void)snapshotNetworkState;

@end
