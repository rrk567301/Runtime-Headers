@class NSString, NSArray;

@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    NSArray *_colors;
}

@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) long long style;
@property (readonly, nonatomic) NSString *configurationDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;

@end
