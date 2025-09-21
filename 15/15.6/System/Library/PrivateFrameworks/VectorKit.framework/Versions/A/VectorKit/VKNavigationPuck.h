@class NSString;
@protocol VKAnnotation;

@interface VKNavigationPuck : NSObject <VKTrackableAnnotationPresentation> {
    struct AnimationRunner { struct MapEngine *x0; } *_animationRunner;
    void *_navigationPuck;
}

@property (retain, nonatomic) id<VKAnnotation> annotation;
@property (nonatomic) struct { double x0; double x1; } presentationCoordinate;
@property (nonatomic) double presentationCourse;
@property (nonatomic) int mode;
@property (nonatomic) char tracking;
@property (nonatomic) char animatingToCoordinate;
@property (nonatomic) char showCourse;
@property (nonatomic) char stale;
@property (nonatomic) float scale;
@property (nonatomic) char enabled;
@property (nonatomic, getter=isAnimatingAccuracy) char animatingAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (readonly, nonatomic) double minimumAccuracy;
@property (readonly, nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } annotationTrackingEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)runAnimation:(id)a0;
- (void)destroyAnimationRunner;
- (id)initWithAnimationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a0;
- (void *)puck;

@end
