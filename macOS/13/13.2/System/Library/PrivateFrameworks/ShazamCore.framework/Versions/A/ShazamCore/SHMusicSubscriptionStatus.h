@class NSArray;

@interface SHMusicSubscriptionStatus : NSObject

@property (readonly) NSArray *eligibleAppleMusicOffers;
@property (readonly) long long appleMusicSubscriptionStatus;

- (void).cxx_destruct;
- (id)initWithOffers:(id)a0 subscriptionStatus:(long long)a1;

@end
