@class NSColor;

@interface XSDisablingTextField : NSTextField {
    NSColor *origTextColor;
}

- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;

@end
