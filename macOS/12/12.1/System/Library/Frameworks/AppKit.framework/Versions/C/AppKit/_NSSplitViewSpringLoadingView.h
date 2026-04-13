@interface _NSSplitViewSpringLoadingView : NSView {
    long long _orientation;
    BOOL _didSpringLoad;
}

@property long long orientation;
@property (copy) id /* block */ springLoadingHandler;
@property (copy) id /* block */ canSpringLoadHandler;

- (void)dealloc;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_hitTest:(struct CGPoint { double x0; double x1; } *)a0 dragTypes:(id)a1;
- (void)draggingEnded:(id)a0;
- (unsigned long long)springLoadingEntered:(id)a0;
- (void)springLoadingHighlightChanged:(id)a0;
- (void)springLoadingActivated:(BOOL)a0 draggingInfo:(id)a1;
- (BOOL)shouldBeArchived;
- (void)springLoadingExited:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (BOOL)_canSpringLoad;
- (void)_springLoad;
- (void)_unSpringLoad;

@end
