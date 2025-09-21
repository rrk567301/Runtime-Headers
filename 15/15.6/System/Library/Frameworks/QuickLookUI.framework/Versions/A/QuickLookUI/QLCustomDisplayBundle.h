@protocol QLPreviewItem, QLDisplayable;

@interface QLCustomDisplayBundle : QLDisplayBundle

@property (retain) id<QLDisplayable> displayable;
@property (retain) id<QLPreviewItem> previewItem;

+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)customDisplayBundleForPreviewItem:(id)a0 owner:(id)a1 displayable:(id)a2;
+ (id)keyPathsForValuesAffectingAutoplay;
+ (id)keyPathsForValuesAffectingCurrentHorizontalScroll;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (id)keyPathsForValuesAffectingCurrentScroll;
+ (id)keyPathsForValuesAffectingHasAudio;
+ (id)keyPathsForValuesAffectingNumberOfPages;
+ (id)keyPathsForValuesAffectingTotalHorizontalScroll;
+ (id)keyPathsForValuesAffectingTotalScroll;

- (void).cxx_destruct;
- (id)URL;
- (void)cleanup;
- (double)duration;
- (void)setCurrentPage:(unsigned long long)a0;
- (void)setCurrentTime:(double)a0;
- (unsigned long long)currentPage;
- (double)currentTime;
- (unsigned long long)numberOfPages;
- (void)setVolume:(float)a0;
- (float)volume;
- (char)playing;
- (char)muted;
- (void)setMuted:(char)a0;
- (char)hasAudio;
- (id)displayBundleID;
- (char)autoplay;
- (void)setPlaying:(char)a0;
- (char)allowsNetworkAccess;
- (void)didHide;
- (void)willShow;
- (void)didShow;
- (void)willHide;
- (char)canSelectText;
- (void)_updatePreviewItem;
- (char)allowsFileAccess;
- (char)allowsJavascript;
- (char)allowsOpeningFileURLs;
- (char)allowsPlugIns;
- (double)currentHorizontalScroll;
- (double)currentScroll;
- (char)isValidInPreviewMode:(int)a0;
- (int)loadWithHints:(id)a0;
- (char)pathBarShouldOverlay;
- (id)quickLookLayer;
- (id)quickLookView;
- (void)setCurrentHorizontalScroll:(double)a0;
- (void)setCurrentScroll:(double)a0;
- (id)sizingConstraints;
- (double)totalHorizontalScroll;
- (double)totalScroll;

@end
