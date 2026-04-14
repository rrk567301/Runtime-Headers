@interface PDSplitDirectionOptions : PDTransitionOptions {
    int mOrientation;
    int mInOut;
}

- (int)orientation;
- (void)setOrientation:(int)a0;
- (int)inOut;
- (void)setInOut:(int)a0;

@end
