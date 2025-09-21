@interface PDAnimateScaleBehavior : PDAnimateBehavior {
    struct CGPoint { double x; double y; } mTo;
    struct CGPoint { double x; double y; } mFrom;
    struct CGPoint { double x; double y; } mBy;
    char mHasTo;
    char mHasFrom;
    char mHasBy;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })from;
- (struct CGPoint { double x0; double x1; })to;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (void)setTo:(struct CGPoint { double x0; double x1; })a0;
- (char)hasFrom;
- (struct CGPoint { double x0; double x1; })by;
- (char)hasBy;
- (char)hasTo;
- (void)setBy:(struct CGPoint { double x0; double x1; })a0;

@end
