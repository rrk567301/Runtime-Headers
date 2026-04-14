@class AFQueue, NSMutableArray, NSString;
@protocol SVSTranscriptDelegate, SVSTranscriptDataSource;

@interface SVSTranscript : NSObject <AFQueueDelegate, SVSTranscriptItemGroupDelegate, NSFastEnumeration>

@property (readonly, nonatomic, getter=_allTranscriptItems) NSMutableArray *allTranscriptItems;
@property (readonly, nonatomic, getter=_exposedTranscriptItems) NSMutableArray *exposedTranscriptItems;
@property (readonly, nonatomic, getter=_loadingTranscriptItemGroupQueue) AFQueue *loadingTranscriptItemGroupQueue;
@property (readonly, nonatomic) long long discardedItemCount;
@property (readonly, nonatomic) long long transcriptItemCount;
@property (weak, nonatomic) id<SVSTranscriptDataSource> dataSource;
@property (weak, nonatomic) id<SVSTranscriptDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)reloadData;
- (void)insertItemsAtIndexes:(id)a0;
- (void)reloadItemsAtIndexes:(id)a0;
- (id)lastItem;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (void)reloadViewControllerAtIndex:(long long)a0;
- (void)transcriptItemGroupPresentationEligibilityDidChange:(id)a0;
- (void)unloadViewControllerAtIndex:(long long)a0;
- (void)removeItemsWithIdentifiers:(id)a0 atIndexes:(id)a1;
- (void)presentationStateDidChangeForItemsAtIndexes:(id)a0;
- (void)setErrorViewControllerForTranscriptItem:(id)a0;
- (void)_processLoadingTranscriptItemGroupQueue;
- (void)transcriptItemDidBecomeReadyToAppear:(id)a0;
- (id)conversationItemIdentifierForViewController:(id)a0;
- (id)transcriptItemAtIndex:(long long)a0;
- (id)transcriptItemsAtIndexes:(id)a0;
- (id)transcriptItemForConversationItemWithIdentifier:(id)a0;
- (long long)indexOfTranscriptItem:(id)a0;
- (void)enumerateTranscriptItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateTranscriptItemsUsingBlock:(id /* block */)a0;
- (void)_configureViewController:(id)a0 withAceObject:(id)a1 itemIndex:(long long)a2;
- (id)_createErrorSnippetViewControllerWithAceObject:(id)a0 itemIndex:(long long)a1;
- (id)_createTranscriptItemForAceObject:(id)a0 itemIndex:(long long)a1;
- (id)transcriptItemForViewController:(id)a0;
- (void)clearTranscriptItemViewControllerDelegates;
- (void)_notifyThatViewControllerWillBeRemoved:(id)a0;
- (void)_clearViewControllerDelegateForTranscriptItem:(id)a0;
- (id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)a0;
- (long long)_conversationIndexForTranscriptItem:(id)a0;
- (long long)conversationIndexForTranscriptLevelModelItemAtIndex:(long long)a0;
- (id)_transcriptItemForDataSourceItemAtIndex:(long long)a0;
- (id)_transcriptItemsForDataSourceItemsAtIndexes:(id)a0;
- (id)_aceObjectForItemAtIndex:(long long)a0;
- (BOOL)_transcriptHasProvisionalItems;

@end
