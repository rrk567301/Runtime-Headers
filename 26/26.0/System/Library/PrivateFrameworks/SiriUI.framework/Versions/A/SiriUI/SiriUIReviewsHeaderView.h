@class NSView;

@interface SiriUIReviewsHeaderView : SiriUIReusableSubtitledHeaderView

@property (retain, nonatomic) NSView *ratingView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } ratingViewOffset;
@property (nonatomic) double verticalSpaceNeededForRatingsView;
@property (retain, nonatomic) NSView *providerView;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } providerViewOffset;

- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)a0;

@end
