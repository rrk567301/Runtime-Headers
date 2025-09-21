@class NSString;
@protocol VKLabelNavFeature;

@interface VKLabelNavRoadLabel : NSObject {
    int _navLabelType;
    NSString *_displayGroup;
    char _isPicked;
}

@property (weak, nonatomic) id<VKLabelNavFeature> navFeature;
@property (readonly, nonatomic) struct shared_ptr<md::NavLabel> { struct NavLabel *__ptr_; struct __shared_weak_count *__cntrl_; } label;
@property (nonatomic) unsigned char alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) char isShieldLabel;
@property (readonly, nonatomic) char isRoadLabel;
@property (readonly, nonatomic) char isJunctionLabel;
@property (readonly, nonatomic) char isManeuverLabel;
@property (readonly, nonatomic) char isEtaLabel;
@property (readonly, nonatomic) char isTrafficCameraLabel;
@property (nonatomic) unsigned short renderOrder;
@property (nonatomic) struct Mercator2<double> { double _e[2]; } mercatorPoint;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layoutForStagingWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (id)displayGroup;
- (id)initWithNavFeature:(id)a0 label:(const void *)a1 navLabelType:(int)a2;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;

@end
