@class NSImage, NSTouchBarItemTree, NSCandidateListTouchBarItem;

@interface NSTouchBarCustomizationPalettePreset : NSObject <NSCopying> {
    NSImage *_presetSnapshot;
    struct CGSize { double width; double height; } _size;
    NSCandidateListTouchBarItem *_collapsedItem;
}

@property (readonly, copy) NSImage *presetSnapshot;
@property (readonly) NSTouchBarItemTree *representedItemTree;
@property double visualCenterXOffset;

+ (id)presetForItemTree:(id)a0 inBarWithSize:(struct CGSize { double x0; double x1; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;
- (id)makePaletteViewForSnapshot;
- (void)cleanUpPaletteViewAfterSnapshot:(id)a0;

@end
