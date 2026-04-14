@protocol NSScrollAnimationHelperDelegate;

@interface NSScrollAnimationHelper : NSAnimation {
    id<NSScrollAnimationHelperDelegate> _delegate;
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _endPoint;
    struct { unsigned char logPerformanceAnalysis : 1; unsigned char logPerformanceAnalysisInProgress : 1; unsigned char isScrollDueToUserAction : 1; unsigned char delegateRespondsTo_setIsScrollDueToUserAction : 1; unsigned int  : 28; } _flags;
}

@property (copy) id /* block */ completionHandler;

- (BOOL)_isAnimating;
- (void)dealloc;
- (void)setCurrentProgress:(float)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_displayLinkProvider;
- (void)_stopRun;
- (void)changeDestinationToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setIsScrollDueToUserAction:(BOOL)a0;
- (void)setLogPerformanceAnalysis:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })targetOrigin;

@end
