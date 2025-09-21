@class OADColor;

@interface PDAnimateColorBehavior : PDAnimateBehavior {
    char mHasBy;
    double mBy[3];
    char mHasFrom;
    OADColor *mFrom;
    char mHasTo;
    OADColor *mTo;
    char mHasColorSpace;
    int mColorSpace;
    char mHasColorDirection;
    int mDirection;
}

- (void).cxx_destruct;
- (int)colorSpace;
- (int)direction;
- (void)setColorSpace:(int)a0;
- (void)setDirection:(int)a0;
- (id)from;
- (id)to;
- (void)setFrom:(id)a0;
- (void)setTo:(id)a0;
- (char)hasFrom;
- (double[3] *)by;
- (char)hasBy;
- (char)hasColorDirection;
- (char)hasColorSpace;
- (char)hasTo;
- (void)setBy:(double[3])a0;

@end
