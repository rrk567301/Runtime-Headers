@class ICLightweightMusicSubscriptionStatus;

@interface ICLightweightMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ICLightweightMusicSubscriptionStatus *lightweightSubscriptionStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithExtendedSubscriptionStatusResponse:(id)a0;

@end
