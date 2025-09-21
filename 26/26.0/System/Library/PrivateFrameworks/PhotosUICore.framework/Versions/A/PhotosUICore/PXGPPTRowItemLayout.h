@class NSColor, NSString;

@interface PXGPPTRowItemLayout : PXGLayout <PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _colorSpriteIndex;
}

@property (readonly, nonatomic) NSColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)update;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;

@end
