@class PXSnapStripView, PXLivePhotoTrimScrubberSnapStripControllerSpec, PXLivePhotoTrimScrubber;

@interface PXLivePhotoTrimScrubberSnapStripController : NSObject

@property (retain, nonatomic) PXLivePhotoTrimScrubberSnapStripControllerSpec *spec;
@property (retain, nonatomic) PXLivePhotoTrimScrubber *trimScrubber;
@property (retain, nonatomic) PXSnapStripView *snapStripView;
@property (nonatomic) char allowStartEndTimeSnapIndicators;

- (void).cxx_destruct;
- (id)_snapIndicatorInfosForTimes:(id)a0 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 style:(unsigned long long)a2 skipSingleIndicatorWithCurrentTime:(char)a3 skipDefaultTimeIndicator:(char)a4;
- (id)_snapIndicatorInfosForTimes:(id)a0 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 suggestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 style:(unsigned long long)a3 skipSingleIndicatorWithCurrentTime:(char)a4 skipDefaultTimeIndicator:(char)a5;
- (void)snapStripViewNeedsDisplay;
- (void)updateSnapStripView;
- (void)updateSnapStripViewAnimated:(char)a0;

@end
