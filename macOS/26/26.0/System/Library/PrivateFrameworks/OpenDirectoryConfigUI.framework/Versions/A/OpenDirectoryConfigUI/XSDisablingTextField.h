@class NSColor;

@interface XSDisablingTextField : NSTextField {
    NSColor *origTextColor;
}

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
