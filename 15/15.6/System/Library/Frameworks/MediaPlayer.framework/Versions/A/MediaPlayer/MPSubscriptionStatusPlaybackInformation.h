@class ICMusicSubscriptionStatus;

@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    ICMusicSubscriptionStatus *_subscriptionStatusObject;
}

@property (readonly, nonatomic, getter=isDefinitiveInformation) char definitiveInformation;
@property (readonly, nonatomic) char hasPlaybackCapability;
@property (readonly, nonatomic) char requiresCarrierManualVerification;
@property (readonly, nonatomic) char shouldUseLease;
@property (readonly, nonatomic) char shouldUseAccountLessStreaming;

- (id)description;
- (void).cxx_destruct;
- (id)initWithICSubscriptionStatus:(id)a0;

@end
