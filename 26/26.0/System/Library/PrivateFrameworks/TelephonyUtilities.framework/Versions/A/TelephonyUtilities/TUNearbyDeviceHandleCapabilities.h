@interface TUNearbyDeviceHandleCapabilities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isAVLessCapable) BOOL avLessCapable;
@property (readonly, nonatomic, getter=isLagunaCapable) BOOL lagunaCapable;
@property (readonly, nonatomic, getter=isAudioCallCapable) BOOL audioCallCapable;
@property (readonly, nonatomic, getter=isTelephonyRelayCapable) BOOL telephonyRelayCapable;
@property (readonly, nonatomic, getter=isGreenTea) BOOL greenTea;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAVLessCapable:(BOOL)a0 lagunaCapable:(BOOL)a1 audioCallCapable:(BOOL)a2 telephonyRelayCapable:(BOOL)a3 greenTea:(BOOL)a4;

@end
