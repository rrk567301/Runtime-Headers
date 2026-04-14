@class NSString, TFFeedbackFormPresenter;

@interface TFFeedbackFormViewDataSource : NSObject <TFFeedbackFormScreenshotItemDelegate, NSCollectionViewDataSource, NSCollectionViewDelegate>

@property (retain, nonatomic) TFFeedbackFormPresenter *presenter;
@property (copy, nonatomic) id /* block */ refreshCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 acceptDrop:(id)a1 indexPath:(id)a2 dropOperation:(long long)a3;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (unsigned long long)collectionView:(id)a0 validateDrop:(id)a1 proposedIndexPath:(id *)a2 dropOperation:(long long *)a3;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (unsigned long long)screenshotCount;
- (void)addScreenshots:(id)a0;
- (void)didRemoveScreenshotFromFeedback:(id)a0;
- (id)initWithPresenter:(id)a0 refreshCallback:(id /* block */)a1;
- (void)removeScreenshot:(id)a0;

@end
