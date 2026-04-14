@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (int)step;
- (void)setAxis:(int)a0;
- (int)axis;
- (int)start;
- (void)setCount:(unsigned int)a0;
- (void)setStart:(int)a0;
- (unsigned int)count;
- (int)pointType;
- (void)setStep:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
