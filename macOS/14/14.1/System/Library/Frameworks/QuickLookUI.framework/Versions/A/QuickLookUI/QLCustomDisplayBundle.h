@protocol QLPreviewItem, QLDisplayable;

@interface QLCustomDisplayBundle : QLDisplayBundle

@property (retain) id<QLDisplayable> displayable;
@property (retain) id<QLPreviewItem> previewItem;

+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingDuration;
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
- (void)cleanup;
- (id)URL;
- (float)volume;
- (double)duration;
- (void)setCurrentPage:(unsigned long long)a0;
- (BOOL)playing;
- (void)setCurrentTime:(double)a0;
- (unsigned long long)currentPage;
- (double)currentTime;
- (unsigned long long)numberOfPages;
- (void)setVolume:(float)a0;
- (BOOL)muted;
- (void)setMuted:(BOOL)a0;
- (BOOL)hasAudio;
- (id)displayBundleID;
- (BOOL)autoplay;
- (void)setPlaying:(BOOL)a0;
- (BOOL)allowsPlugIns;
- (void)didHide;
- (void)willShow;
- (void)didShow;
- (void)willHide;
- (BOOL)canSelectText;
- (void)_updatePreviewItem;
- (BOOL)allowsFileAccess;
- (BOOL)allowsJavascript;
- (BOOL)allowsNetworkAccess;
- (BOOL)allowsOpeningFileURLs;
- (double)currentHorizontalScroll;
- (double)currentScroll;
- (BOOL)isValidInPreviewMode:(int)a0;
- (int)loadWithHints:(id)a0;
- (BOOL)pathBarShouldOverlay;
- (id)quickLookLayer;
- (id)quickLookView;
- (void)setCurrentHorizontalScroll:(double)a0;
- (void)setCurrentScroll:(double)a0;
- (id)sizingConstraints;
- (double)totalHorizontalScroll;
- (double)totalScroll;

@end
