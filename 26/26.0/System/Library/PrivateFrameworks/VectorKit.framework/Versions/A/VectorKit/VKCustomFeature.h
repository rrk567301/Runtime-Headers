@class NSString, GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource, VKCustomImageProvider;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalFeature> { struct LabelExternalFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
    id<VKCustomImageProvider> _imageProvider;
    NSString *_imageKey;
    BOOL _isGlobalFeature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOFeatureStyleAttributes *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _featureStyleAttributesPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void *)feature;
- (unsigned long long)businessID;
- (void)setImageProvider:(id)a0 withKey:(id)a1;
- (void)setBusinessID:(unsigned long long)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (void)setVenueID:(unsigned long long)a0;
- (void)setTextDisplayMode:(unsigned char)a0;
- (BOOL)isInjectedFeature;
- (void)setElevationOffset:(double)a0;
- (void)setStyleAttributes:(id)a0;
- (void)setText:(id)a0 locale:(id)a1;
- (id)initLineWithCoordinates:(const struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (id)dataSource;
- (BOOL)isLineFeature;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)venueComponentID;
- (void *)lineFeature;
- (unsigned char)clusteringMode;
- (unsigned long long)venueBuildingID;
- (id)init;
- (void)setVenueBuildingID:(unsigned long long)a0;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void)setDataSource:(id)a0;
- (id)imageProvider;
- (id)customImageKey;
- (void)setMinZoom:(float)a0;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (unsigned long long)venueLevelID;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (BOOL)isGlobalFeature;
- (id)initWithCoordinate3D:(struct { double x0; double x1; double x2; })a0;
- (id)styleAttributes;
- (unsigned long long)featureID;
- (void)setMaxZoom:(float)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)setFeatureRegion:(id)a0;
- (void)setVenueLevelID:(unsigned long long)a0;
- (void)setVenueComponentID:(unsigned long long)a0;
- (void)setBuildingHeight:(float)a0;
- (void)setFeatureID:(unsigned long long)a0;
- (void)setVenueFloorOrdinal:(short)a0;
- (short)venueFloorOrdinal;
- (void)setClusteringMode:(unsigned char)a0;
- (unsigned long long)clientFeatureID;
- (unsigned long long)venueID;
- (void)setSortKey:(int)a0;
- (void)setBuildingFaceAzimuth:(float)a0;
- (void).cxx_destruct;
- (void)setClientFeatureID:(unsigned long long)a0;
- (void *)pointFeature;
- (BOOL)isPointFeature;

@end
