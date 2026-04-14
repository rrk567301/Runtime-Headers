@class NSMutableArray;
@protocol PXStoryChapterCollection;

@interface PXStoryChapterCollectionManager : PXObservable <PXStoryMutableChapterCollectionManager>

@property (copy, nonatomic) id /* block */ pendingCompletionHandler;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (retain, nonatomic) id<PXStoryChapterCollection> chapterCollection;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)didPerformChanges;
- (void)editChapterWithIdentifier:(id)a0 changeRequest:(id /* block */)a1;
- (void)insertChapterWithFirstAsset:(id)a0 configuration:(id /* block */)a1;
- (void)deleteChapterWithIdentifier:(id)a0;
- (id)initWithChapterCollection:(id)a0;
- (BOOL)applyEditTransaction:(id)a0 error:(id *)a1;

@end
