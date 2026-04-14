@class NSArray, PXPhotosLayoutSpec, PXPhotosHeaderCustomizationModel;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) BOOL sectionHeadersEnabled;
@property (nonatomic) BOOL wantsToggleSidebarButton;
@property (nonatomic) BOOL shouldMakeSpaceForLeadingChrome;
@property (nonatomic) long long overrideDefaultNumberOfColumns;
@property (readonly, nonatomic) PXPhotosHeaderCustomizationModel *headerCustomizationModel;
@property (nonatomic) BOOL hasPhysicalHomeButton;
@property (copy, nonatomic) id /* block */ dynamicHeaderHeightCallback;

- (void).cxx_destruct;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (Class)specClass;
- (double)dynamicHeaderHeightForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 enableSectionHeaders:(BOOL)a2;

@end
