@interface _NSItemFocusingCollectionView : NSCollectionView

@property char isActiveFirstResponder;

- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;

@end
