@interface PDPrismOptions : PDSideDirectionOptions {
    char mIsContent;
    char mIsInverted;
}

- (char)isContent;
- (char)isInverted;
- (void)setIsContent:(char)a0;
- (void)setIsInverted:(char)a0;

@end
