@class NSColor, NSColorWell;

@interface NSDebugCustomAccentColorViewController : NSViewController {
    NSColor *_originalColor;
    NSColorWell *_colorWell;
}

- (void)dealloc;
- (void)loadView;
- (id)_colorWell;
- (void)revertCustomAccentColor:(id)a0;
- (void)updateCustomAccentColor:(id)a0;

@end
