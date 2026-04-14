@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)sortedBarItemsByPlacement:(id)a0;

@end
