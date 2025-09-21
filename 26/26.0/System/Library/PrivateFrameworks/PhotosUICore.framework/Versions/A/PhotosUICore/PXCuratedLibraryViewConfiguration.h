@class PHPhotoLibrary, PXPhotosViewOptionsModel, PXLemonadeFeatureAvailabilityMonitor;

@interface PXCuratedLibraryViewConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic, readonly) PXLemonadeFeatureAvailabilityMonitor *featureAvailabilityMonitor;
@property (nonatomic) unsigned long long layoutStyle;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long initialZoomLevel;
@property (nonatomic) BOOL enableDays;
@property (nonatomic) BOOL enableFooter;
@property (nonatomic) BOOL enableNavigationHeader;
@property (nonatomic) BOOL isExpandedInitially;
@property (nonatomic) BOOL enableSecondaryToolbar;
@property (nonatomic) unsigned long long secondaryToolbarStyle;
@property (nonatomic) long long overrideDefaultNumberOfColumns;
@property (nonatomic) unsigned long long allowedInteractiveDismissBehaviors;
@property (retain, nonatomic) PXPhotosViewOptionsModel *viewOptionsModel;
@property (nonatomic) BOOL enableSecondaryToolbarContainerView;
@property (nonatomic) BOOL showSecondaryToolbar;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isZoomLevelEnabled:(long long)a0;
- (void)swift_copyPropertiesFromConfiguration:(id)a0;
- (void)swift_propagateEnvironmentValuesToExtendedTraitCollection:(id)a0;

@end
