@class AABattery, NSString, NSMutableDictionary, NSArray;

@interface AADeviceBatteryInfo : NSObject <NSSecureCoding> {
    NSMutableDictionary *_batteryMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableDictionary *batteryMap;
@property (copy, nonatomic) NSString *bluetoothAddress;
@property (nonatomic) unsigned char dynamicEndOfChargeCapability;
@property unsigned char color;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned char optimizedBatteryChargingCapability;
@property unsigned int productID;
@property BOOL isConnected;
@property BOOL isNearby;
@property (copy, nonatomic) NSString *findMyGroupIdentifier;
@property (copy, nonatomic) NSString *caseIdentifier;
@property unsigned char caseVersion;
@property unsigned char caseLedColor;
@property unsigned char caseLedStatus;
@property (readonly, nonatomic) BOOL areAnyBatteriesAvailable;
@property (readonly, nonatomic) NSArray *batteries;
@property (readonly, nonatomic) AABattery *batteryCase;
@property (readonly, nonatomic) AABattery *batteryLeft;
@property (readonly, nonatomic) AABattery *batteryMain;
@property (readonly, nonatomic) AABattery *batteryRight;
@property (readonly, nonatomic) AABattery *batteryCombinedLeftRight;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AABattery *visibleBatteryCase;
@property (readonly, nonatomic) AABattery *visibleBatteryLeft;
@property (readonly, nonatomic) AABattery *visibleBatteryMain;
@property (readonly, nonatomic) AABattery *visibleBatteryRight;
@property (readonly, nonatomic) AABattery *visibleBatteryCombinedLeftRight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)batteryForType:(long long)a0;
- (long long)_batteryStateFromCharging:(BOOL)a0 chargingOBC:(BOOL)a1 chargingDEOC:(BOOL)a2;
- (void)_clearCombinedBattery;
- (BOOL)_updateBatteriesFromTetheredAdvertisement:(id)a0;
- (BOOL)_updateBatteriesFromUntetheredAdvertisement:(id)a0;
- (BOOL)_updateCaseInfo:(id)a0;
- (BOOL)_updateChargingOBCTimeUntilCharged:(unsigned char)a0;
- (void)_updateCombinedBatteryWithChanges:(BOOL)a0;
- (BOOL)_updateWithAACPBatteryInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a0;
- (BOOL)_updateWithNearbyBattery:(id)a0 forType:(long long)a1 withSource:(unsigned int)a2;
- (BOOL)_updateWithProximityPairingPayload:(id)a0;
- (BOOL)applyOverrideFromStr:(id)a0 forBatteryType:(long long)a1;
- (BOOL)clearExpiredBatteries;
- (void)removeBatteryInMap:(id)a0;
- (void)setBatteryInMap:(id)a0;
- (BOOL)updateWithAACPBatteryInfoData:(id)a0;
- (BOOL)updateWithAANearbyDevice:(id)a0;
- (BOOL)updateWithConnectedDevice:(id)a0;
- (BOOL)updateWithDisconnectedDevice:(id)a0;
- (BOOL)updateWithLostAANearbyDevice:(id)a0;
- (BOOL)updateWithPairedDevice:(id)a0;

@end
