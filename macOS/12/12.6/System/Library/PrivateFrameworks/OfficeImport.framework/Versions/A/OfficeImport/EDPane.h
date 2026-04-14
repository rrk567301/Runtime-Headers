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
- (void)setActivePane:(int)a0;
- (void)setXSplitPosition:(double)a0;
- (void)setYSplitPosition:(double)a0;
- (void)setTopLeftCell:(id)a0;
- (int)activePane;
- (double)xSplitPosition;
- (double)ySplitPosition;
- (id)topLeftCell;
- (int)paneState;
- (void)setPaneState:(int)a0;

@end
