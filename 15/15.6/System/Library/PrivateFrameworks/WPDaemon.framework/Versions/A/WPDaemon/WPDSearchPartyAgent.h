@class WPDPendingCompletions, NSArray, NSData, SPBeaconManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WPDSearchPartyAgent : NSObject

@property (retain) NSData *beaconKey;
@property (readonly, weak) NSObject<OS_dispatch_queue> *queue;
@property char disableScans;
@property char isTestMode;
@property char spBeaconState;
@property unsigned char spBeaconStatus;
@property (readonly) NSData *spBeaconReserved;
@property char testBeaconState;
@property unsigned char testBeaconStatus;
@property (retain) NSData *testBeaconReserved;
@property (retain) SPBeaconManager *beaconManager;
@property (copy) id /* block */ beaconChange;
@property (retain) NSArray *spBeaconKeys;
@property (retain) NSDate *spBeaconKeysUpdated;
@property (copy) id /* block */ beaconStateChangedBlock;
@property (copy) id /* block */ beaconKeysChangedBlock;
@property (copy) id /* block */ beaconStatusChangedBlock;
@property (copy) id /* block */ nearbyTokensChangedBlock;
@property (copy) id /* block */ tokensChange;
@property (retain) NSArray *spNearbyTokens;
@property (retain) NSDate *spNearbyTokensUpdated;
@property (retain) NSArray *testNearbyTokens;
@property (retain) NSArray *testBeaconKeys;
@property (retain) NSDate *testNearbyTokensUpdated;
@property (retain) NSDate *testBeaconKeysUpdated;
@property (readonly) NSArray *beaconKeys;
@property (readonly) NSDate *nearbyTokensUpdated;
@property (readonly) NSDate *beaconKeysUpdated;
@property char continueAdvOnFail;
@property (retain) WPDPendingCompletions *pendingKeyCompletions;
@property (retain) WPDPendingCompletions *pendingTokenCompletions;
@property (readonly) char beaconState;
@property (readonly) unsigned char beaconStatus;
@property (readonly) NSData *beaconReserved;
@property (readonly) NSArray *nearbyTokens;

+ (id)spBeaconKeyFromTestKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startTest;
- (void)stopTest;
- (void)completedKeyRequestID:(unsigned long long)a0 success:(char)a1;
- (void)completedTokenRequestID:(unsigned long long)a0 success:(char)a1;
- (void)generateStateDump;
- (void)initSPObjects;
- (id)initWithQueue:(id)a0 beaconChange:(id /* block */)a1 tokensChange:(id /* block */)a2;
- (void)rollKeysWithRequestID:(unsigned long long)a0;
- (void)rollKeys_async;
- (void)rollKeys_async_completion:(id /* block */)a0;
- (void)rollTokensWithRequestID:(unsigned long long)a0;
- (void)rollTokens_async;
- (void)rollTokens_async_completion:(id /* block */)a0;
- (void)updateTestBeaconExtended:(id)a0;
- (void)updateTestBeaconKeys:(id)a0;
- (void)updateTestBeaconState:(id)a0;
- (void)updateTestBeaconStatus:(id)a0;
- (void)updateTestNearOwnerTokens:(id)a0;

@end
