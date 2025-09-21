@interface PDInvertCoordinateOptions : PDTransitionOptions {
    char mIsInvX;
    char mIsInvY;
}

- (char)isInvX;
- (char)isInvY;
- (void)setIsInvX:(char)a0;
- (void)setIsInvY:(char)a0;

@end
