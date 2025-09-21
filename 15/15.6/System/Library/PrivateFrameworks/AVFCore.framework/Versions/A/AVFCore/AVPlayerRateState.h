@class NSString;

@interface AVPlayerRateState : NSObject <NSCopying>

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) char automaticallyWaitsToMinimizeStalling;
@property (readonly, nonatomic) char usesLegacyAutomaticWaitingBehavior;
@property (readonly, nonatomic) long long timeControlStatus;
@property (readonly, nonatomic) NSString *reasonForWaitingToPlay;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAutomaticallyWaitsToMinimizeStalling:(char)a0 usesLegacyAutomaticWaitingBehavior:(char)a1 timeControlStatus:(long long)a2;
- (id)rateStateByInferringTimeControlStatusAndWaitingReasonBasedOnPresenceOfCurrentItem:(char)a0 hasCurrentInterstitialEvent:(char)a1 nameForLogging:(id)a2;
- (id)rateStateBySettingAutomaticallyWaitsToMinimizeStalling:(char)a0;
- (id)rateStateBySettingRate:(float)a0 nameForLogging:(id)a1;
- (id)rateStateBySettingTimeControlStatus:(long long)a0 reasonForWaitingToPlay:(id)a1 nameForLogging:(id)a2;
- (id)rateStateBySettingUsesLegacyAutomaticWaitingBehavior:(char)a0;
- (id)rateStateByUpdatingBasedOnFigPlayer:(struct OpaqueFigPlayer { } *)a0 hasCurrentItem:(char)a1 hasCurrentInterstitialEvent:(char)a2 nameForLogging:(id)a3;
- (id)rateStateByUpdatingBasedOnFigPlayerPlaybackState:(int)a0 hasCurrentInterstitialEvent:(char)a1 nameForLogging:(id)a2;
- (id)rateStateByUpdatingBasedOnPresenceOfCurrentInterstitialEvent:(char)a0 nameForLogging:(id)a1;

@end
