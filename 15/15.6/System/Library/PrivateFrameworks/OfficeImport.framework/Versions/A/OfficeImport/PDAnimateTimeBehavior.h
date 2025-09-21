@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    char mHasCalcMode;
    int mCalcMode;
    char mHasValueType;
    int mValueType;
}

- (id)init;
- (void).cxx_destruct;
- (int)valueType;
- (void)setValueType:(int)a0;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (char)hasValueType;
- (void)setTo:(id)a0;
- (id)by;
- (int)calcMode;
- (char)hasCalcMode;
- (void)setBy:(id)a0;
- (void)setCalcMode:(int)a0;

@end
