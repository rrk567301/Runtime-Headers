@class NSArray, NSMutableArray;

@interface PFDeviceTimeRectCollection : NSObject {
    double _screenScale;
    NSMutableArray *_sortedTimeRects;
    BOOL _invalid;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minTimeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } minTimeRectInImageSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } maxTimeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } maxTimeRectInImageSpace;
@property (readonly, nonatomic) NSArray *sortedTimeRects;
@property (readonly, nonatomic) BOOL isInvalid;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nearestRectForPointSpaceHeight:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeRectInImageSpaceFromPointSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 screenScale:(double)a1;
- (void)addTimeRectInOrder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageSpaceTimeRectForPointSpaceTimeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithInvalidCollection;
- (id)initWithPointSpaceSortedTimeRects:(id)a0 screenScale:(double)a1;
- (id)initWithScreenScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPointSpaceHeight:(double)a0;

@end
