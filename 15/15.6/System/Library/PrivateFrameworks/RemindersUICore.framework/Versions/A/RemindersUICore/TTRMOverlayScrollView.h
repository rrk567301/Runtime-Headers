@class NSTrackingArea;

@interface TTRMOverlayScrollView : NSScrollView

@property (retain, nonatomic) NSTrackingArea *mouseEnteredExitedTrackingArea;
@property (nonatomic) char flashesScrollersOnMouseMoved;
@property (nonatomic) char forceOverlayScrollers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;
- (long long)scrollerStyle;
- (void)setScrollerStyle:(long long)a0;

@end
