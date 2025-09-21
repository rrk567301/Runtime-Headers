@class HMDAccessory;

@interface HMDBLEBroadcastEventReceived : HMMLogEvent

@property (readonly, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) char hasExpectedGSN;

+ (id)broadcastEventFromAccessory:(id)a0 withExpectedGSN:(char)a1;

- (void).cxx_destruct;
- (id)initBroadcastEventFromAccessory:(id)a0 withExpectedGSN:(char)a1;

@end
