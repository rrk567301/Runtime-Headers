@class NSColor;

@interface XSDisablingTextField : NSTextField {
    NSColor *origTextColor;
}

- (void)setEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
