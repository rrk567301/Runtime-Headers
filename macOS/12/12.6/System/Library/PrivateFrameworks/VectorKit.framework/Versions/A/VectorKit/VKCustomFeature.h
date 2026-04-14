@class GEOFeatureStyleAttributes;
@protocol VKCustomFeatureDataSource;

@interface VKCustomFeature : NSObject <NSSecureCoding> {
    struct shared_ptr<md::LabelExternalFeature> { struct LabelExternalFeature *__ptr_; struct __shared_weak_count *__cntrl_; } _feature;
    id<VKCustomFeatureDataSource> _dataSource;
    BOOL _isGlobalFeature;
    struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; GEOFeatureStyleAttributes *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _featureStyleAttributesPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)styleAttributes;
- (unsigned long long)featureID;
- (void *)feature;
- (unsigned long long)businessID;
- (void)setStyleAttributes:(id)a0;
- (void)setBusinessID:(unsigned long long)a0;
- (void)setMinZoom:(float)a0;
- (unsigned long long)venueID;
- (void)setSortKey:(int)a0;
- (void)setText:(id)a0 locale:(id)a1;
- (void)setTextDisplayMode:(unsigned char)a0;
- (unsigned long long)venueBuildingID;
- (unsigned long long)venueLevelID;
- (short)venueFloorOrdinal;
- (unsigned long long)venueComponentID;
- (BOOL)isGlobalFeature;
- (void)setAnnotationText:(id)a0 locale:(id)a1;
- (void)setPlaceholderIconWithSize:(struct CGSize { double x0; double x1; })a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 isRound:(BOOL)a2;
- (void *)pointFeature;
- (id)_initWithCoordinate:(struct { double x0; double x1; double x2; })a0 isInjected:(BOOL)a1;
- (void *)lineFeature;
- (id)initWithCoordinate3D:(struct { double x0; double x1; double x2; })a0;
- (void)setBuildingHeight:(float)a0;
- (void)setBuildingFaceAzimuth:(float)a0;
- (void)setVenueID:(unsigned long long)a0;
- (void)setVenueLevelID:(unsigned long long)a0;
- (void)setVenueComponentID:(unsigned long long)a0;
- (void)setVenueFloorOrdinal:(short)a0;
- (id)initLineWithCoordinates:(const struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (void)setFeatureID:(unsigned long long)a0;
- (void)setMaxZoom:(float)a0;
- (BOOL)isPointFeature;
- (BOOL)isLineFeature;
- (id)_initInternalFeatureWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (BOOL)isInjectedFeature;
- (void)setVenueBuildingID:(unsigned long long)a0;

@end
