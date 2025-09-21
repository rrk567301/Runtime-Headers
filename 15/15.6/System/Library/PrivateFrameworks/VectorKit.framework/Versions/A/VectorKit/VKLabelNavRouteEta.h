@class NSString, VKRouteEtaDescription, VKRouteInfo, VKLabelNavRoadLabel;

@interface VKLabelNavRouteEta : NSObject <VKLabelNavFeature> {
    unsigned long long _etaLabelArtworkKey;
    unsigned char _orientation;
    struct { double latitude; double longitude; double altitude; } _coordinate;
}

@property (readonly, nonatomic) VKLabelNavRoadLabel *label;
@property (nonatomic) char selected;
@property (readonly, nonatomic) unsigned char etaComparisonToMain;
@property (retain, nonatomic) VKRouteInfo *routeInfo;
@property (readonly, nonatomic) VKRouteEtaDescription *displayEtaDescription;
@property (nonatomic) char isRepositioning;
@property (nonatomic) unsigned char orientation;
@property (nonatomic) struct optional<gss::When> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } when;
@property (nonatomic) struct optional<gss::RouteLegWhen> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } routeLegWhen;
@property (readonly, nonatomic) double worldUnitsPerMeterAtPoint;
@property (nonatomic) char didStyleChange;
@property (readonly, nonatomic) char isOnRoute;
@property (readonly, nonatomic) char isAwayFromRoute;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) char isRamp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) char isStartOfRoadName;
@property (readonly, nonatomic) char isInGuidance;
@property (readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property (readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property (readonly, nonatomic) char isGuidanceStepStart;
@property (readonly, nonatomic) char isEtaFeature;
@property (readonly, nonatomic) char isTrafficCameraFeature;
@property (nonatomic) char isPicked;
@property (readonly, nonatomic) char isValid;

+ (id)artworkForEtaDescription:(id)a0 navContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a1 roadSignStyleGroup:(const void *)a2 mercatorPoint:(const void *)a3 orientation:(unsigned char)a4 isSelected:(char)a5 artworkCache:(void *)a6;
+ (struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct GeoCodecsFeatureStylePair *x1; struct __compressed_pair<GeoCodecsFeatureStylePair *, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator> { struct Allocator *x0; } x1; } x2; })baseAttributesForEtaLabel:(char)a0 focused:(char)a1 etaComparison:(unsigned char)a2 transportType:(unsigned char)a3 navLabelType:(unsigned char)a4 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a5 routeLegWhen:(struct optional<gss::RouteLegWhen> { union { char x0; unsigned char x1; } x0; BOOL x1; })a6 additionalAttributes:(id)a7;
+ (struct RoadSignStyleGroup { struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x0; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x1; struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> { void *x0; struct __shared_weak_count *x1; } x2; })styleForNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 selected:(char)a1 focused:(char)a2 etaComparison:(unsigned char)a3 transportType:(unsigned char)a4 navLabelType:(unsigned char)a5 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a6 routeLegWhen:(struct optional<gss::RouteLegWhen> { union { char x0; unsigned char x1; } x0; BOOL x1; })a7 additionalAttributes:(id)a8;
+ (unsigned char)toStyleEtaComparison:(unsigned char)a0;
+ (unsigned char)toStyleNavLabelType:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)hasLabel;
- (void)clearLabel;
- (void)createLabelWithNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 orientation:(unsigned char)a1 etaDescription:(id)a2 selected:(char)a3 when:(struct optional<gss::When> { union { char x0; unsigned char x1; } x0; BOOL x1; })a4 routeLegWhen:(struct optional<gss::RouteLegWhen> { union { char x0; unsigned char x1; } x0; BOOL x1; })a5 artworkCache:(void *)a6;
- (char)hasAnchor;
- (char)hasLabelWithAnchor;
- (id)initWithRouteInfo:(id)a0 routeCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)prepareStyleVarsWithContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)repositionAtRouteCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
- (void)updateAnchorWithContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **x0; id x1; struct _retain_objc_arc { } x2; struct _release_objc_arc { } x3; })updateRoadSignWithNavContext:(const struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 artworkCache:(void *)a1;
- (struct Matrix<double, 3, 1> { double x0[3]; })worldPointForStaging;

@end
