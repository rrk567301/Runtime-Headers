@class QLFullscreenController;

@interface QLFullscreenWindow : NSWindow

@property (weak) QLFullscreenController *fullscreenController;

- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)scrollWheel:(id)a0;
- (void)sendEvent:(id)a0;
- (BOOL)worksWhenModal;
- (void)magnifyWithEvent:(id)a0;
- (void)swipeWithEvent:(id)a0;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (id)_qlControllerCandidateForPreviewPanel:(id)a0;
- (BOOL)_qlIgnoreWindowForPreviewPanel:(id)a0;

@end
