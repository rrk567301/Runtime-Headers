@class EDReference;

@interface EDPane : NSObject {
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (double)xSplitPosition;
- (void)setXSplitPosition:(double)a0;
- (double)ySplitPosition;
- (void)setYSplitPosition:(double)a0;
- (id)topLeftCell;
- (void)setTopLeftCell:(id)a0;
- (int)activePane;
- (void)setActivePane:(int)a0;
- (int)paneState;
- (void)setPaneState:(int)a0;

@end
