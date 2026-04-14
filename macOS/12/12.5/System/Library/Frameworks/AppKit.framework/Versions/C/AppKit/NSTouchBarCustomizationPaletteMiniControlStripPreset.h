@class NSArray;

@interface NSTouchBarCustomizationPaletteMiniControlStripPreset : NSTouchBarCustomizationPalettePreset {
    NSArray *_widthConstraints;
}

- (id)makePaletteViewForSnapshot;
- (void)cleanUpPaletteViewAfterSnapshot:(id)a0;

@end
