@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long variant;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;
- (id)createSpec;
- (Class)specClass;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;

@end
