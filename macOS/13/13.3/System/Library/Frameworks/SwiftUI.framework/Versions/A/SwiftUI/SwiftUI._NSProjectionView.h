@interface SwiftUI._NSProjectionView : SwiftUI._NSGraphicsView {
    void /* unknown type, empty encoding */ projectionTransform;
}

@property (nonatomic, readonly) BOOL wantsUpdateLayer;

- (id)initWithCoder:(id)a0;
- (void)_updateLayerGeometryFromView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
