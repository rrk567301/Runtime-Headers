@class ODIState;

@interface ODILinear : NSObject {
    char mIsHorizontal;
    char mWithConnectors;
    char mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    char mIsTextCenteredHorizontally;
    char mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (char)mapIdentifier:(id)a0 state:(id)a1;
+ (void)mapUnknownWithState:(id)a0;

- (void).cxx_destruct;
- (id)initWithState:(id)a0;
- (void)setPadding:(float)a0;
- (void)map;
- (void)setStretch:(char)a0;
- (void)setPointHeight:(float)a0;
- (void)mapPoint:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mapStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapStyleFromTransition:(id)a0 shape:(id)a1;
- (void)mapTransition:(id)a0 pointBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)nextPointBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)setConnectorWidth:(float)a0;
- (void)setIsHorizontal:(char)a0;
- (void)setIsTextCentered:(char)a0;
- (void)setIsTextCenteredHorizontally:(char)a0;
- (void)setIsTextCenteredVertically:(char)a0;
- (void)setLogicalBounds;
- (void)setMaxPointCount:(unsigned int)a0;
- (void)setWithConnectors:(char)a0;

@end
