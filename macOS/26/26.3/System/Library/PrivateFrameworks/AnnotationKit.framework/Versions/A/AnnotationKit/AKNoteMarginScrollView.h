@class NSTrackingArea;

@interface AKNoteMarginScrollView : NSScrollView {
    NSTrackingArea *_tskTrackingArea;
}

@property (nonatomic) BOOL wantsOnlyOverlayScrollers;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAutohidesScrollers:(BOOL)a0;
- (void)setScrollerStyle:(long long)a0;
- (void)pConfigureForLegacyStyle;

@end
