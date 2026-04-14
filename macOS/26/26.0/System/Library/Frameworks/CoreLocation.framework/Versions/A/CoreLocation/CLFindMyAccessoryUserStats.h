@interface CLFindMyAccessoryUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long overflowFlag;
@property (readonly) unsigned long long crashCount;
@property (readonly) unsigned long long multiTime;
@property (readonly) unsigned long long nearOwnerTime;
@property (readonly) unsigned long long wildTime;
@property (readonly) unsigned long long soundCount;
@property (readonly) unsigned long long soundTime;
@property (readonly) unsigned long long rangingCount;
@property (readonly) unsigned long long rangingTime;
@property (readonly) unsigned long long multiLeashTime;
@property (readonly) unsigned long long multiConnectionTime;
@property (readonly) unsigned long long nearOwnerTimeV2;
@property (readonly) unsigned long long singleLeashTime;
@property (readonly) unsigned long long singleConnectionTime;
@property (readonly) unsigned long long dualConnectionTime;
@property (readonly) unsigned long long dualLeashTime;
@property (readonly) unsigned long long utAccelCount;
@property (readonly) unsigned long long lastClear;
@property (readonly) unsigned long long roseOnTime;
@property (readonly) unsigned long long ownerLongSoundCount;
@property (readonly) unsigned long long ownerShortSoundCount;
@property (readonly) unsigned long long utLongSoundCount;
@property (readonly) unsigned long long utShortSoundCount;
@property (readonly) unsigned long long bomSoundCount;
@property (readonly) unsigned long long fc1ndRangingCount;
@property (readonly) unsigned long long fc1ndRangingTime;
@property (readonly) unsigned long long lastPIn;
@property (readonly) long long batteryState;
@property (readonly) unsigned long long nbmmsRangingTime;
@property (readonly) unsigned long long abandonedFwUpdateCount;
@property (readonly) unsigned long long abandonedFwUpdateTime;
@property (readonly) unsigned long long roseInitCount;
@property (readonly) unsigned long long pairingAttemptsCount;
@property (readonly) unsigned long long tempVeryLowCount;
@property (readonly) unsigned long long tempLowCount;
@property (readonly) unsigned long long tempOkCount;
@property (readonly) unsigned long long tempHighCount;
@property (readonly) unsigned long long proxPairingTime;
@property (readonly) unsigned long long tempLastPIn;
@property (readonly) unsigned long long nbmmsRangingCount;

+ (id)batteryStateToString:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithOverflowFlag:(unsigned long long)a0 crashCount:(unsigned long long)a1 multiTime:(unsigned long long)a2 nearOwnerTime:(unsigned long long)a3 wildTime:(unsigned long long)a4 soundCount:(unsigned long long)a5 soundTime:(unsigned long long)a6 rangingCount:(unsigned long long)a7 rangingTime:(unsigned long long)a8 multiLeashTime:(unsigned long long)a9 multiConnectionTime:(unsigned long long)a10 nearOwnerTimeV2:(unsigned long long)a11 singleLeashTime:(unsigned long long)a12 singleConnectionTime:(unsigned long long)a13 dualConnectionTime:(unsigned long long)a14 dualLeashTime:(unsigned long long)a15 utAccelCount:(unsigned long long)a16 lastClear:(unsigned long long)a17 roseOnTime:(unsigned long long)a18 ownerLongSoundCount:(unsigned long long)a19 ownerShortSoundCount:(unsigned long long)a20 utLongSoundCount:(unsigned long long)a21 utShortSoundCount:(unsigned long long)a22 bomSoundCount:(unsigned long long)a23 fc1ndRangingCount:(unsigned long long)a24 fc1ndRangingTime:(unsigned long long)a25 lastPIn:(unsigned long long)a26 batteryState:(long long)a27 nbmmsRangingTime:(unsigned long long)a28 abandonedFwUpdateCount:(unsigned long long)a29 abandonedFwUpdateTime:(unsigned long long)a30 roseInitCount:(unsigned long long)a31 pairingAttemptsCount:(unsigned long long)a32 tempVeryLowCount:(unsigned long long)a33 tempLowCount:(unsigned long long)a34 tempOkCount:(unsigned long long)a35 tempHighCount:(unsigned long long)a36 proxPairingTime:(unsigned long long)a37 tempLastPIn:(unsigned long long)a38 nbmmsRangingCount:(unsigned long long)a39 version:(unsigned long long)a40;
- (id)initWithPayloadV1:(id)a0;
- (id)initWithPayloadV2:(id)a0;
- (id)initWithPayloadV3:(id)a0;

@end
