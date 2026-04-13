@interface PDInvertCoordinateOptions : PDTransitionOptions {
    BOOL mIsInvX;
    BOOL mIsInvY;
}

- (BOOL)isInvX;
- (void)setIsInvX:(BOOL)a0;
- (BOOL)isInvY;
- (void)setIsInvY:(BOOL)a0;

@end
