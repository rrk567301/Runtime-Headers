@class LANMO, NetworkMO, NSDate, NSObject, BSSMO;

@interface WADeviceAnalyticsDatedRecord : NSManagedObject

@property (nonatomic) short band;
@property (nonatomic) short channel;
@property (nonatomic) short channelWidth;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSObject *historyBcnPer;
@property (retain, nonatomic) NSObject *historyBcnSched;
@property (retain, nonatomic) NSObject *historyCca;
@property (retain, nonatomic) NSObject *historyFwTxFrames;
@property (retain, nonatomic) NSObject *historyFwTxPer;
@property (retain, nonatomic) NSObject *historyRssi;
@property (retain, nonatomic) NSObject *historySnr;
@property (retain, nonatomic) NSObject *historyTxFrames;
@property (retain, nonatomic) NSObject *historyTxPer;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) short rssi;
@property (nonatomic) int status;
@property (nonatomic) int subReason;
@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) LANMO *lan;
@property (retain, nonatomic) NetworkMO *network;

+ (id)fetchRequest;
+ (id)datedProperty;
+ (id)unusedSuperEntityProperties;

- (id)description;
- (id)attributeDescription:(id)a0;

@end
