@class NSData;

@interface CLFindMyAccessoryUserStats : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *allStats;
@property (readonly) long long overflowFlag;
@property (readonly) long long crashCount;
@property (readonly) double multiTime;
@property (readonly) double nearOwnerTime;
@property (readonly) double wildTime;
@property (readonly) long long soundCount;
@property (readonly) double soundTime;
@property (readonly) long long rangingCount;
@property (readonly) double rangingTime;
@property (readonly) double multiLeashedTime;
@property (readonly) double multiTimeV2;
@property (readonly) double nearOwnerTimeV2;
@property (readonly) double leashedTime;
@property (readonly) double singleConnTime;
@property (readonly) double dualConnTime;
@property (readonly) double dualLeashedTime;
@property (readonly) long long utAccelCount;
@property (readonly) double lastClear;
@property (readonly) double bootR1Time;
@property (readonly) long long ownerLongSoundCount;
@property (readonly) long long ownerShortSoundCount;
@property (readonly) long long utLongSoundCount;
@property (readonly) long long utShortSoundCount;
@property (readonly) long long bomSoundCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithOverflowFlag:(long long)a0 crashCount:(long long)a1 multiTime:(double)a2 nearOwnerTime:(double)a3 wildTime:(double)a4 soundCount:(long long)a5 soundTime:(double)a6 rangingCount:(long long)a7 rangingTime:(double)a8 allStats:(id)a9;
- (id)initWithPayloadV1:(id)a0;
- (id)initWithPayloadV2:(id)a0;

@end
