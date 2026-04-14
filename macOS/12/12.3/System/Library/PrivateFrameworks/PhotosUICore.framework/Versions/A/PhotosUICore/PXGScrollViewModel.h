@interface PXGScrollViewModel : PXObservable <PXGMutableScrollViewModel>

@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) long long scrollRegime;
@property (readonly, nonatomic) long long scrollDecelerationRate;
@property (readonly, nonatomic) BOOL clipsToBounds;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly, nonatomic) BOOL draggingPerformsScroll;
@property (readonly, nonatomic) unsigned long long changesOptions;

- (id)description;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setClipsToBounds:(BOOL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setDraggingPerformsScroll:(BOOL)a0;
- (void)setScrollRegime:(long long)a0;
- (void)performChanges:(id /* block */)a0 options:(unsigned long long)a1;
- (void)didEndChangeHandling;
- (void)stopScrolling;
- (void)setScrollDecelerationRate:(long long)a0;

@end
