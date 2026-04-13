@interface NSStatusBarContentView : NSView {
    BOOL _hasCAShadow;
}

@property BOOL hasCAShadow;

- (void)updateLayer;
- (unsigned long long)_vibrantBlendingStyleForSubtree;

@end
