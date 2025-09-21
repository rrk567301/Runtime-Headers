@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    BOOL mHasCalcMode;
    int mCalcMode;
    BOOL mHasValueType;
    int mValueType;
}

- (void)setValueType:(int)a0;
- (int)valueType;
- (BOOL)hasValueType;
- (id)init;
- (void).cxx_destruct;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (id)by;
- (int)calcMode;
- (BOOL)hasCalcMode;
- (void)setBy:(id)a0;
- (void)setCalcMode:(int)a0;

@end
