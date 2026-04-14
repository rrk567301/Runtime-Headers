@class PXGHostingController;

@interface PXGConcreteHostingControllerPresenter : NSObject <PXGHostingControllerPresenter, PXGMutableHostingControllerPresenter, PXGMutableHostingControllerPresenterMutator> {
    BOOL _isPerformingChanges;
    BOOL _didChange;
    double _displayScale;
    struct CGSize { double width; double height; } _size;
}

@property (weak, nonatomic) PXGHostingController *hostingController;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double displayScale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (void)performChanges:(id /* block */)a0;
- (void)dealloc;
- (void)setDisplayScale:(double)a0;

@end
