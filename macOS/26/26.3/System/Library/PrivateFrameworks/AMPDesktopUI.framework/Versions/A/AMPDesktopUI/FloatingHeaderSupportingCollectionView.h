@class NSView;

@interface FloatingHeaderSupportingCollectionView : NSCollectionView

@property (retain, nonatomic) NSView *floatingHeaderView;

- (void).cxx_destruct;
- (id)headerView;
- (BOOL)_wantsHeaderView;

@end
