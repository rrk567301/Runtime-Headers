@class NSTrackingArea;

@interface AKNoteMarginScrollView : NSScrollView {
    NSTrackingArea *_tskTrackingArea;
}

@property (nonatomic) BOOL wantsOnlyOverlayScrollers;

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)dealloc;
- (void)setAutohidesScrollers:(BOOL)a0;
- (void)setScrollerStyle:(long long)a0;
- (void)pConfigureForLegacyStyle;

@end
