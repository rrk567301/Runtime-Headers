@interface AABattery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double level;
@property (nonatomic) unsigned int productID;
@property long long state;
@property long long type;
@property unsigned char chargingOBCTimeUntilCharged;
@property (readonly) BOOL inAACP;
@property (readonly) BOOL isExpired;
@property double lastSeen;
@property unsigned char lastOrigin;
@property (readonly, nonatomic) double lowLevel;
@property unsigned int sourceFlags;
@property (readonly, nonatomic) long long chargeStatus;
@property (readonly) BOOL charging;
@property (readonly) BOOL chargingDEOC;
@property (readonly) BOOL chargingOBC;
@property (readonly) BOOL fullyCharged;
@property (readonly) BOOL isCaseBattery;
@property (readonly, nonatomic) BOOL isChargingPaused;
@property (readonly, nonatomic) BOOL isLow;
@property (readonly) BOOL valid;

+ (id)invalidBattery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAACPBatteryInfo:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a0 productID:(unsigned int)a1;
- (id)initWithLevel:(double)a0 productID:(unsigned int)a1 state:(long long)a2 type:(long long)a3;
- (BOOL)isEqualToBattery:(id)a0;
- (BOOL)updateWithAABattery:(id)a0;

@end
