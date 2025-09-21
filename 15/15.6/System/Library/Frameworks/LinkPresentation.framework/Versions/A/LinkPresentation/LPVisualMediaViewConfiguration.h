@interface LPVisualMediaViewConfiguration : NSObject <NSCopying>

@property (nonatomic) char disablePlayback;
@property (nonatomic) char disablePlaybackControls;
@property (nonatomic) char disableAutoPlay;
@property (nonatomic) char allowsLoadingMediaWithAutoPlayDisabled;
@property (nonatomic) double fullScreenTransitionCornerRadius;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
