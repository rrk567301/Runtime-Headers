@class NSColor;

@interface XSDisablingTextField : NSTextField {
    NSColor *origTextColor;
}

- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;

@end
