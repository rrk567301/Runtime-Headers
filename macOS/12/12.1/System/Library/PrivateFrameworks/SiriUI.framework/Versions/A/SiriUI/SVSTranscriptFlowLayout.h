@class NSMutableArray;
@protocol SVSTranscriptFlowLayoutDelegate;

@interface SVSTranscriptFlowLayout : NSCollectionViewFlowLayout

@property (readonly, nonatomic, getter=_insertedIndexPaths) NSMutableArray *insertedIndexPaths;
@property (readonly, nonatomic, getter=_reloadedIndexPaths) NSMutableArray *reloadedIndexPaths;
@property (readonly, nonatomic, getter=_handledIndexPaths) NSMutableArray *handledIndexPaths;
@property (weak) id<SVSTranscriptFlowLayoutDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)finalizeCollectionViewUpdates;

@end
