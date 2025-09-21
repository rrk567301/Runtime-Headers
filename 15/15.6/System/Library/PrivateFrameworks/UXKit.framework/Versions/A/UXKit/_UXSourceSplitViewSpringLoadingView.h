@interface _UXSourceSplitViewSpringLoadingView : NSView {
    char _didSpringLoad;
}

@property (copy) id /* block */ springLoadingHandler;
@property (copy) id /* block */ canSpringLoadHandler;

- (void).cxx_destruct;
- (char)_canSpringLoad;
- (id)_hitTest:(struct CGPoint { double x0; double x1; } *)a0 dragTypes:(id)a1;
- (void)_springLoad;
- (void)_unSpringLoad;
- (void)draggingEnded:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)prepareForDragOperation:(id)a0;
- (void)springLoadingActivated:(char)a0 draggingInfo:(id)a1;
- (unsigned long long)springLoadingEntered:(id)a0;
- (void)springLoadingExited:(id)a0;
- (void)springLoadingHighlightChanged:(id)a0;

@end
