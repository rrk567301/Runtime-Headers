@class NSTimer, NSNumber;
@protocol WLKPostPlayAutoPlayToggleInterfaceDelegate;

@interface WLKPostPlayAutoPlayToggleInterface : NSObject

@property (retain, nonatomic) NSTimer *nextEpisodeBouncer;
@property (retain, nonatomic) NSTimer *recommendedItemsBouncer;
@property (weak, nonatomic) id<WLKPostPlayAutoPlayToggleInterfaceDelegate> delegate;
@property (retain, nonatomic) NSNumber *isNextEpisodeSettingEnabled;
@property (retain, nonatomic) NSNumber *isRecommendedItemsSettingEnabled;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_autoPlayNextEpisodeSettingDidChange:(id)a0;
- (void)_autoPlayRecommendedItemsSettingDidChange:(id)a0;

@end
