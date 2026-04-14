@interface PFParallaxMutableIntermediateLayout : PFParallaxIntermediateLayout

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } salientContentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adaptiveInactiveTopRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialVisibleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } spatialAdaptiveVisibleRect;
@property (nonatomic) unsigned long long zoomStrategy;
@property (nonatomic) unsigned long long overlapStrategy;
@property (nonatomic) unsigned long long parallaxStrategy;
@property (nonatomic) unsigned long long inactiveStrategy;
@property (nonatomic) unsigned long long headroomStrategy;
@property (nonatomic) unsigned long long adaptiveStrategy;
@property (nonatomic) unsigned long long spatialStrategy;
@property (nonatomic) unsigned long long layoutVariant;
@property (nonatomic) double cropScore;
@property (nonatomic) double layoutScore;
@property (nonatomic) double timeBottomOverlap;
@property (nonatomic) double timeTopOverlap;
@property (nonatomic) double unsafeAreaOverlap;
@property (nonatomic) double uninflatedUnsafeAreaOverlap;
@property (nonatomic) BOOL hasTopEdgeContact;
@property (nonatomic) double maxClockShift;
@property (nonatomic) double zoomFactor;

@end
