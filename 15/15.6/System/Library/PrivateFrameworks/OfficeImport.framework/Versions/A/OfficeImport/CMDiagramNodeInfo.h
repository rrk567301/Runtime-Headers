@interface CMDiagramNodeInfo : NSObject {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { float mMid; float mLength; } mXRange;
    char mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    void *mXRanges;
}

- (void)dealloc;
- (id)init;
- (int)row;
- (void)setRow:(int)a0;
- (void *)xRanges;
- (void)addToXOffsetRelativeToParent:(float)a0;
- (char)connectToVerticalSide;
- (int)extraRowsBetweenParentAndSelf;
- (void)setConnectToVerticalSide:(char)a0;
- (void)setExtraRowsBetweenParentAndSelf:(int)a0;
- (void)setTreeDepth:(int)a0;
- (void)setXOffsetRelativeToParent:(float)a0;
- (void)setXRange:(struct ODIHRange { float x0; float x1; })a0;
- (int)treeDepth;
- (float)xOffsetRelativeToParent;
- (struct ODIHRange { float x0; float x1; })xRange;

@end
