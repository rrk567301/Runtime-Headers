@class NSString, NSDictionary, NSData, NSArray;

@interface SFPowerSource : NSObject <NSSecureCoding> {
    struct OpaqueIOPSPowerSourceID { } *_psID;
    int _lowPowerMonitoringToken;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription;
@property (nonatomic) char added;
@property (nonatomic) char present;
@property (nonatomic) unsigned int changes;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (copy, nonatomic) NSData *batteryCaseAddress;
@property (nonatomic) char charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) long long color;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *LEDs;
@property (nonatomic, getter=isLowPowerModeEnabled) char lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel;
@property (readonly, nonatomic, getter=isInternal) char internal;
@property (nonatomic) double maxCapacity;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *partID;
@property (copy, nonatomic) NSString *partName;
@property (nonatomic) int powerState;
@property (nonatomic) long long productID;
@property (nonatomic) int role;
@property (nonatomic) char showChargingUI;
@property (nonatomic) long long sourceID;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorID;
@property (readonly, nonatomic) char wirelessCharging;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName;
@property (nonatomic) char adapterSharedSource;
@property (nonatomic) long long adapterSourceID;
@property (readonly, nonatomic) long long matID;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (int)publish;
- (void)_updateWithCoder:(id)a0;
- (id)detailedDescription;
- (unsigned int)updateWithPowerAdapterDetails:(id)a0;
- (void)updateWithPowerSource:(id)a0;
- (unsigned int)updateWithPowerSourceDescription:(id)a0;
- (void)lowPowerModeChanged:(int)a0;
- (void)startLowPowerMonitoringIfAppropriate;

@end
