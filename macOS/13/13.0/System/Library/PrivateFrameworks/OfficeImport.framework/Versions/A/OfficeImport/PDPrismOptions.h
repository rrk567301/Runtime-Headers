@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}

- (BOOL)isContent;
- (void)setIsContent:(BOOL)a0;
- (BOOL)isInverted;
- (void)setIsInverted:(BOOL)a0;

@end
