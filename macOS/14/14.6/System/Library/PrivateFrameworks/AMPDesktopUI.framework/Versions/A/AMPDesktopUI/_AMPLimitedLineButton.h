@interface _AMPLimitedLineButton : NSButton {
    long long _maxLineCount;
}

- (void)layout;
- (void)setMaximumNumberOfLines:(long long)a0;

@end
