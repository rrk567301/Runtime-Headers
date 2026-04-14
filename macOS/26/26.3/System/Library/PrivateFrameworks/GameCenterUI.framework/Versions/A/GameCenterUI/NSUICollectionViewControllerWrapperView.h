@class NSUICollectionViewController;

@interface NSUICollectionViewControllerWrapperView : NSView

@property (nonatomic) NSUICollectionViewController *collectionViewController;

- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)didMoveToSuperview;

@end
