@class NSView;

@interface FloatingHeaderSupportingCollectionView : NSCollectionView

@property (retain, nonatomic) NSView *floatingHeaderView;

- (id)headerView;
- (void).cxx_destruct;
- (BOOL)_wantsHeaderView;

@end
