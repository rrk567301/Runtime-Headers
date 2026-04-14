@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setAxis:(int)a0;
- (int)axis;
- (void)setStart:(int)a0;
- (void)setCount:(unsigned int)a0;
- (int)start;
- (unsigned int)count;
- (int)step;
- (int)pointType;
- (void)setStep:(int)a0;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
