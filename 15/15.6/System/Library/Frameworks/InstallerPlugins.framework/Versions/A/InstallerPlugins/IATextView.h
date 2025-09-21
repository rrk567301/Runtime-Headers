@interface IATextView : NSTextView {
    char _contextualMenuIsDisabled;
}

- (id)menuForEvent:(id)a0;
- (char)shouldDrawInsertionPoint;
- (void)setContextualMenuDisabled:(char)a0;

@end
