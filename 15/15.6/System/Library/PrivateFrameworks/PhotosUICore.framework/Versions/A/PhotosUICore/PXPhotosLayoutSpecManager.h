@class NSArray, PXPhotosLayoutSpec, PXPhotosHeaderCustomizationModel;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (readonly, nonatomic) char sectionHeadersEnabled;
@property (nonatomic) char wantsToggleSidebarButton;
@property (nonatomic) char shouldMakeSpaceForLeadingChrome;
@property (readonly, nonatomic) PXPhotosHeaderCustomizationModel *headerCustomizationModel;

- (void).cxx_destruct;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 enableSectionHeaders:(char)a2;
- (char)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (Class)specClass;

@end
