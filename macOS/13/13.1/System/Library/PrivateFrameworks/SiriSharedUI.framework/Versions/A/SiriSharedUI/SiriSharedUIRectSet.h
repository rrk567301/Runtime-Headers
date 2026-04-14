@class NSSet;

@interface SiriSharedUIRectSet : NSObject <NSCopying>

@property (readonly, copy, nonatomic, getter=_rectValues) NSSet *rectValues;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRectValues:(id)a0;
- (id)initWithFramesForViews:(id)a0 inCoordinateSpace:(id)a1;

@end
