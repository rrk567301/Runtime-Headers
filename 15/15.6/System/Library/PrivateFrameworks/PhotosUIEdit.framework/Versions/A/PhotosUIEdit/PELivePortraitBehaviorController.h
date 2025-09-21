@protocol PEAsset, PELivePortraitBehaviorDelegate;

@interface PELivePortraitBehaviorController : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (weak, nonatomic) id<PELivePortraitBehaviorDelegate> delegate;
@property (nonatomic) char changingPortraitLightingDisablesLive;
@property (readonly, nonatomic) char hasDepth;
@property (readonly, nonatomic) char hasLive;
@property (readonly, nonatomic) char hasLivePortrait;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 delegate:(id)a1 hasDepth:(char)a2 hasLive:(char)a3;
- (void)applySideEffectsForAction:(unsigned long long)a0 compositionController:(id)a1;
- (id)confirmationWarningStringForAction:(unsigned long long)a0 compositionController:(id)a1;

@end
