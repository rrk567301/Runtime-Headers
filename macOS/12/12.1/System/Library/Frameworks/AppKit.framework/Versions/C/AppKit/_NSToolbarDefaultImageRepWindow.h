@class NSToolbar;

@interface _NSToolbarDefaultImageRepWindow : NSWindow {
    NSToolbar *defaultItemsToolbar;
}

- (void)dealloc;
- (BOOL)_shouldForceRolloverStylingForControl:(id)a0;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)a0;

@end
