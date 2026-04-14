@class NSString, FI_TDesktopGridLayout;

@interface FI_TViewGridLayoutControllerDelegate : NSObject <TGridLayoutControllerDelegate> {
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _lock;
    FI_TDesktopGridLayout *_gridLayout;
}

@property (nonatomic) BOOL layoutInRows;
@property (nonatomic) BOOL isLTRLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isLTRLayout;
- (void)setAnchoredCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })occupyGridSpots:(unsigned long long)a0;
- (void)clearAllItemLocations;
- (struct CGPoint { double x0; double x1; })anchorForIndex:(unsigned long long)a0 offset:(const struct CGPoint { double x0; double x1; } *)a1;
- (unsigned long long)totalNumberOfGridSpots;
- (struct CGPoint { double x0; double x1; })invalidAnchorPoint;
- (BOOL)layoutInRowsWhileLocked;
- (BOOL)isLTRLayoutWhileLocked;
- (unsigned long long)_totalNumberOfGridSpots;
- (id)gridLayoutForRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)setLayoutBounds:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)setLayoutInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;
- (BOOL)layoutInRows;
- (void)setLayoutInRows:(BOOL)a0;
- (void)setIsLTRLayout:(BOOL)a0;

@end
