@class NSString;
@protocol _FECoordinateSpace;

@interface _FEFocusMapRect : NSObject <_FEFocusMapArea>

@property (readonly, weak, nonatomic) id<_FECoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)intersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (id)intersectionWithRegion:(id)a0 inSnapshot:(id)a1;
- (char)intersectsRegion:(id)a0 inSnapshot:(id)a1;

@end
