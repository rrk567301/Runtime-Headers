@class NSMutableDictionary, HMDCharacteristicReadWriteNetworkInformation;
@protocol HMMUptimeProvider;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDCharacteristicReadWriteLogEventManager *sharedInstance;

@property (readonly, nonatomic) id<HMMUptimeProvider> uptimeProvider;
@property (readonly, nonatomic) NSMutableDictionary *accessoryStatisticsByHMDAccessoryUUID;
@property (retain) HMDCharacteristicReadWriteNetworkInformation *networkInformationCache;

- (void).cxx_destruct;
- (BOOL)_compareIPSignatures:(id)a0 secondSignature:(id)a1;
- (id)_getOrCreateAccessoryStatisticsForAccessoryUUID:(id)a0;
- (void)_setupNetworkCacheWithWifiManager:(id)a0;
- (void)_updateBluetoothStatisticsForLogEvent:(id)a0;
- (void)_updateNetworkStatisticsForLogEvent:(id)a0;
- (void)_updateWiFiStatisticsForLogEvent:(id)a0;
- (double)elapsedTimeInterval:(double)a0;
- (id)initWithUptimeProvider:(id)a0;
- (void)updateBrowseStatus:(BOOL)a0 forAccessoryUUID:(id)a1;
- (void)updateSessionConnectivity:(BOOL)a0 withSessionInfo:(id)a1 forAccessoryUUID:(id)a2;
- (void)updateStatisticsForLogEvent:(id)a0;

@end
