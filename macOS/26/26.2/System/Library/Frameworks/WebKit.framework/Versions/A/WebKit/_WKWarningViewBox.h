@class NSColor;

@interface _WKWarningViewBox : NSView {
    struct RetainPtr<NSColor> { NSColor *m_ptr; } _backgroundColor;
}

- (void)updateLayer;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setWarningViewBackgroundColor:(id)a0;

@end
