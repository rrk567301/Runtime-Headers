@interface NSStatusBarContentView : NSView {
    char _hasCAShadow;
}

@property char hasCAShadow;

- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)updateLayer;

@end
