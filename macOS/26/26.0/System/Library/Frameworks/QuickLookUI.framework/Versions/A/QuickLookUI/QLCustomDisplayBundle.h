@protocol QLPreviewItem, QLDisplayable;

@interface QLCustomDisplayBundle : QLDisplayBundle

@property (retain) id<QLDisplayable> displayable;
@property (retain) id<QLPreviewItem> previewItem;

+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingMuted;
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

- (void)setCurrentTime:(double)a0;
- (void)setPlaying:(BOOL)a0;
- (void)cleanup;
- (void)setCurrentPage:(unsigned long long)a0;
- (void)setVolume:(float)a0;
- (id)URL;
- (double)currentTime;
- (unsigned long long)numberOfPages;
- (unsigned long long)currentPage;
- (float)volume;
- (void)setMuted:(BOOL)a0;
- (double)duration;
- (BOOL)playing;
- (void).cxx_destruct;
- (BOOL)muted;
- (BOOL)hasAudio;
- (id)displayBundleID;
- (BOOL)autoplay;
- (BOOL)allowsNetworkAccess;
- (void)didHide;
- (void)willShow;
- (void)didShow;
- (void)willHide;
- (BOOL)canSelectText;
- (void)_updatePreviewItem;
- (BOOL)allowsFileAccess;
- (BOOL)allowsJavascript;
- (BOOL)allowsOpeningFileURLs;
- (BOOL)allowsPlugIns;
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
