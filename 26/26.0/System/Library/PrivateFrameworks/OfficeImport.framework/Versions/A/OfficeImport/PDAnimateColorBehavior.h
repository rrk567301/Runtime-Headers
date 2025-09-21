@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {
    BOOL mHasBy;
    double mBy[3];
    BOOL mHasFrom;
    OADColor *mFrom;
    BOOL mHasTo;
    OADColor *mTo;
    BOOL mHasColorSpace;
    int mColorSpace;
    BOOL mHasColorDirection;
    int mDirection;
}

- (int)direction;
- (void)setColorSpace:(int)a0;
- (int)colorSpace;
- (void)setDirection:(int)a0;
- (void).cxx_destruct;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (BOOL)hasFrom;
- (double[3] *)by;
- (BOOL)hasBy;
- (BOOL)hasColorDirection;
- (BOOL)hasColorSpace;
- (BOOL)hasTo;
- (void)setBy:(double[3])a0;

@end
