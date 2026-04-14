@class NSColor;

@interface _WKWarningViewBox : NSView {
    struct RetainPtr<NSColor> { NSColor *m_ptr; } _backgroundColor;
}

- (void)updateLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWarningViewBackgroundColor:(id)a0;

@end
