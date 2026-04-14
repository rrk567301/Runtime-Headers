@interface PXStoryBackgroundLayout : PXGLayout <PXGSolidColorSource> {
    void /* unknown type, empty encoding */ updater;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (void)updateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)displayScaleDidChange;
- (void)referenceSizeDidChange;

@end
