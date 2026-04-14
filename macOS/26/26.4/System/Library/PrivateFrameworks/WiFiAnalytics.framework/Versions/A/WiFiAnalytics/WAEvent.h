@class NSString, NSArray, NSDate, NSEntityDescription;

@interface WAEvent : NSObject

@property (retain, nonatomic) NSEntityDescription *entity;
@property (nonatomic) short band;
@property (nonatomic) short channel;
@property (nonatomic) short bw;
@property (retain, nonatomic) NSDate *eventDate;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) int status;
@property (nonatomic) short rssi;
@property (nonatomic) int subreason;
@property (retain, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSArray *ccaHistory;
@property (copy, nonatomic) NSArray *rssiHistory;
@property (copy, nonatomic) NSArray *noiseHistory;
@property (copy, nonatomic) NSArray *snrHistory;
@property (copy, nonatomic) NSArray *txPerHistory;
@property (copy, nonatomic) NSArray *txFrameHistory;
@property (copy, nonatomic) NSArray *fwTxPerHistory;
@property (copy, nonatomic) NSArray *fwTxFramesHistory;
@property (copy, nonatomic) NSArray *beaconSchedHistory;
@property (copy, nonatomic) NSArray *beaconPerHistory;

- (void)updateRecord:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryForCA;
- (void)submitEventToCA;
- (id)_processEventOnPersistentContainer:(id)a0 withError:(id *)a1;
- (id)eventNameForCA;
- (id)initWithEntity:(id)a0 bssid:(id)a1 at:(id)a2 withLqmHistory:(id)a3;
- (id)lqmHistoriesDescription;
- (BOOL)processEventOnPersistentContainer:(id)a0 andRunPostprocessing:(id)a1 withError:(id *)a2;

@end
