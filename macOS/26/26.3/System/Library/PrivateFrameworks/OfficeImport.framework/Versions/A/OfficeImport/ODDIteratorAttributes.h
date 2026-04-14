@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setCount:(unsigned int)a0;
- (int)axis;
- (void)setAxis:(int)a0;
- (unsigned int)count;
- (int)start;
- (void)setStart:(int)a0;
- (int)step;
- (int)pointType;
- (void)setStep:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
