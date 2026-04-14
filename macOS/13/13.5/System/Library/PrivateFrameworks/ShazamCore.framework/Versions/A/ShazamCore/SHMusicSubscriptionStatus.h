@interface SHMusicSubscriptionStatus : NSObject

@property (readonly) long long appleMusicSubscriptionStatus;
@property (readonly) long long shazamMusicSubscriptionStatus;
@property (readonly) BOOL hasActiveAppleMusicSubscription;

- (id)initWithSubscriptionStatus:(long long)a0;

@end
