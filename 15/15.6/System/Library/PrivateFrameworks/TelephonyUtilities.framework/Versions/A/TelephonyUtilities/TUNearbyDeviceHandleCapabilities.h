@interface TUNearbyDeviceHandleCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isAVLessCapable) char avLessCapable;
@property (readonly, nonatomic, getter=isLagunaCapable) char lagunaCapable;
@property (readonly, nonatomic, getter=isAudioCallCapable) char audioCallCapable;
@property (readonly, nonatomic, getter=isTelephonyRelayCapable) char telephonyRelayCapable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAVLessCapable:(char)a0 lagunaCapable:(char)a1 audioCallCapable:(char)a2 telephonyRelayCapable:(char)a3;

@end
