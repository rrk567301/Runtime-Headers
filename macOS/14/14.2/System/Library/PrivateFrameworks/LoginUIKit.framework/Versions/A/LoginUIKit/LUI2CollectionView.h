@class NSObject;
@protocol LUI2CollectionViewDelegate;

@interface LUI2CollectionView : NSCollectionView

@property unsigned long long focusedUserIndex;
@property (weak) NSObject<LUI2CollectionViewDelegate> *lui2Delegate;

- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)userViewAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
