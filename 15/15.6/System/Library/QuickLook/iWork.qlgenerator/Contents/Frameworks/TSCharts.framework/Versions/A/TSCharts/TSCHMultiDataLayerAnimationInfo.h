@class NSArray, NSMutableArray, CAMediaTimingFunction;

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying>

@property (nonatomic) char shouldAnimate;
@property (nonatomic) char aboveIntercept;
@property (nonatomic) char crossesIntercept;
@property (copy, nonatomic) NSArray *keyTimes;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } interceptRect;
@property (nonatomic) char horizontalChart;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chartBodyFrameInRepElementSpace;
@property (readonly, nonatomic) NSMutableArray *layerAnimationValues;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) char elementUndefined;
@property (nonatomic) char atIntercept;
@property (nonatomic) char currentAtIntercept;
@property (nonatomic) char currentAboveIntercept;

+ (id)animationInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addAnimationForLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3;
- (void)addAnimationForLayer:(id)a0 key:(id)a1 values:(id)a2 keyTimes:(id)a3 needPresentationLayerValues:(char)a4;
- (void)addImageContentsAnimationForLayer:(id)a0 fromImage:(id)a1 toImage:(id)a2 keyTimes:(id)a3;

@end
