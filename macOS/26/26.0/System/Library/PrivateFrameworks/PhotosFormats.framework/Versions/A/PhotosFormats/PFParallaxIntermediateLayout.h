@class NSString;

@interface PFParallaxIntermediateLayout : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } salientContentRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveInactiveTopRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialAdaptiveVisibleRect;
@property (readonly, nonatomic) unsigned long long zoomStrategy;
@property (readonly, nonatomic) unsigned long long overlapStrategy;
@property (readonly, nonatomic) unsigned long long parallaxStrategy;
@property (readonly, nonatomic) unsigned long long inactiveStrategy;
@property (readonly, nonatomic) unsigned long long headroomStrategy;
@property (readonly, nonatomic) unsigned long long adaptiveStrategy;
@property (readonly, nonatomic) unsigned long long spatialStrategy;
@property (readonly, nonatomic) unsigned long long layoutVariant;
@property (readonly, nonatomic) double cropScore;
@property (readonly, nonatomic) double layoutScore;
@property (readonly, nonatomic) double timeBottomOverlap;
@property (readonly, nonatomic) double timeTopOverlap;
@property (readonly, nonatomic) double unsafeAreaOverlap;
@property (readonly, nonatomic) double uninflatedUnsafeAreaOverlap;
@property (readonly, nonatomic) double maxClockShift;
@property (readonly, nonatomic) BOOL hasTopEdgeContact;
@property (readonly, nonatomic) double zoomFactor;
@property (readonly, nonatomic) NSString *debugStub;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)updateWithConfiguration:(id /* block */)a0;
- (id)initWithConfiguration:(id /* block */)a0;
- (double)adaptiveHeadroom;
- (double)clockOverlapAcceptabilityForLayoutConfiguration:(id)a0 inflated:(BOOL)a1;
- (BOOL)clockOverlapAcceptableForLayoutConfiguration:(id)a0;
- (double)headroomUsage:(struct CGSize { double x0; double x1; })a0;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inactiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomStrategy:(unsigned long long)a2 overlapStrategy:(unsigned long long)a3 parallaxStrategy:(unsigned long long)a4 inactiveStrategy:(unsigned long long)a5 headroomStrategy:(unsigned long long)a6;
- (id)initWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inactiveRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomStrategy:(unsigned long long)a2 overlapStrategy:(unsigned long long)a3 parallaxStrategy:(unsigned long long)a4 inactiveStrategy:(unsigned long long)a5 headroomStrategy:(unsigned long long)a6 cropScore:(double)a7 layoutScore:(double)a8 timeBottomOverlap:(double)a9 timeTopOverlap:(double)a10 unsafeAreaOverlap:(double)a11 uninflatedUnsafeAreaOverlap:(double)a12 hasTopEdgeContact:(BOOL)a13;
- (BOOL)isAdaptiveLayout;

@end
