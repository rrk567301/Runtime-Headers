@protocol QLPreviewItem, QLDisplayable;

@interface QLCustomDisplayBundle : QLDisplayBundle

@property (retain) id<QLDisplayable> displayable;
@property (retain) id<QLPreviewItem> previewItem;

+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingNumberOfPages;
+ (id)keyPathsForValuesAffectingCurrentPage;
+ (id)keyPathsForValuesAffectingTotalScroll;
+ (id)keyPathsForValuesAffectingCurrentScroll;
+ (id)keyPathsForValuesAffectingTotalHorizontalScroll;
+ (id)keyPathsForValuesAffectingCurrentHorizontalScroll;
+ (id)customDisplayBundleForPreviewItem:(id)a0 owner:(id)a1 displayable:(id)a2;
+ (id)keyPathsForValuesAffectingAutoplay;
+ (id)keyPathsForValuesAffectingHasAudio;

- (void).cxx_destruct;
- (void)cleanup;
- (id)URL;
- (float)volume;
- (double)duration;
- (unsigned long long)currentPage;
- (void)setCurrentPage:(unsigned long long)a0;
- (void)setVolume:(float)a0;
- (double)currentTime;
- (void)setCurrentTime:(double)a0;
- (BOOL)playing;
- (unsigned long long)numberOfPages;
- (BOOL)muted;
- (void)setMuted:(BOOL)a0;
- (BOOL)hasAudio;
- (id)displayBundleID;
- (BOOL)autoplay;
- (void)setPlaying:(BOOL)a0;
- (BOOL)allowsPlugIns;
- (void)willShow;
- (void)didHide;
- (void)didShow;
- (void)willHide;
- (BOOL)canSelectText;
- (id)sizingConstraints;
- (double)totalScroll;
- (double)currentScroll;
- (void)setCurrentScroll:(double)a0;
- (double)totalHorizontalScroll;
- (double)currentHorizontalScroll;
- (void)setCurrentHorizontalScroll:(double)a0;
- (id)quickLookView;
- (id)quickLookLayer;
- (int)loadWithHints:(id)a0;
- (BOOL)isValidInPreviewMode:(int)a0;
- (BOOL)pathBarShouldOverlay;
- (BOOL)allowsNetworkAccess;
- (BOOL)allowsJavascript;
- (BOOL)allowsFileAccess;
- (BOOL)allowsOpeningFileURLs;
- (void)_updatePreviewItem;

@end
