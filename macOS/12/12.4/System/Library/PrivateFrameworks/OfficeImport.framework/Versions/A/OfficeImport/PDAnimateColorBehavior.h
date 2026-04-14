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

- (void).cxx_destruct;
- (int)direction;
- (void)setColorSpace:(int)a0;
- (int)colorSpace;
- (void)setDirection:(int)a0;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (void)setBy:(double[3])a0;
- (double[3] *)by;
- (BOOL)hasTo;
- (BOOL)hasFrom;
- (BOOL)hasBy;
- (BOOL)hasColorSpace;
- (BOOL)hasColorDirection;

@end
