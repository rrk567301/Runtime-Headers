@class NSMutableArray;

@interface WAEventLQMHistory : NSObject

@property (retain, nonatomic) NSMutableArray *ccaHistory;
@property (retain, nonatomic) NSMutableArray *rssiHistory;
@property (retain, nonatomic) NSMutableArray *noiseHistory;
@property (retain, nonatomic) NSMutableArray *snrHistory;
@property (retain, nonatomic) NSMutableArray *txPerHistory;
@property (retain, nonatomic) NSMutableArray *txFrameHistory;
@property (retain, nonatomic) NSMutableArray *fwTxPerHistory;
@property (retain, nonatomic) NSMutableArray *fwTxFramesHistory;
@property (retain, nonatomic) NSMutableArray *beaconSchedHistory;
@property (retain, nonatomic) NSMutableArray *beaconPerHistory;

- (void).cxx_destruct;
- (id)init;

@end
