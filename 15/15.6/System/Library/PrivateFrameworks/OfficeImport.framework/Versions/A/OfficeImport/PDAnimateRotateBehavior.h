@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    double mTo;
    double mFrom;
    double mBy;
    char mHasTo;
    char mHasFrom;
    char mHasBy;
}

- (id)init;
- (double)from;
- (double)to;
- (void)setFrom:(double)a0;
- (void)setTo:(double)a0;
- (char)hasFrom;
- (double)by;
- (char)hasBy;
- (char)hasTo;
- (void)setBy:(double)a0;

@end
