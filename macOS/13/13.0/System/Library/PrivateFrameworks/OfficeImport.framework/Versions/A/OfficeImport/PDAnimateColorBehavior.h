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
- (int)colorSpace;
- (void)setColorSpace:(int)a0;
- (int)direction;
- (void)setDirection:(int)a0;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (double[3] *)by;
- (void)setBy:(double[3])a0;
- (BOOL)hasTo;
- (BOOL)hasFrom;
- (BOOL)hasBy;
- (BOOL)hasColorSpace;
- (BOOL)hasColorDirection;

@end
