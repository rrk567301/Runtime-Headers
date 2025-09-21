@class NSSet, NSMutableArray;

@interface MCAssetVideo : MCAsset {
    NSMutableArray *mSlides;
}

@property (readonly) NSSet *slides;

- (char)isInUse;
- (void)addSlide:(id)a0;
- (void)demolish;
- (void)removeSlide:(id)a0;

@end
