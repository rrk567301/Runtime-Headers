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

- (id)init;
- (void).cxx_destruct;
- (int)valueType;
- (id)from;
- (id)to;
- (void)setValueType:(int)a0;
- (BOOL)hasValueType;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (void)setBy:(id)a0;
- (id)by;
- (BOOL)hasCalcMode;
- (int)calcMode;
- (void)setCalcMode:(int)a0;

@end
