@class NSArray, NSMutableArray, DEItem;

@interface DEIterator : NSObject {
    NSMutableArray *_stack;
    struct __DEComparisonBuffer { } *_dataForkComparisonBuf;
    char _delegateImplementsShouldSkipOld;
    char _delegateImplementsShouldSkipNew;
    char _delegateImplementsFoundRemovedItems;
    char _delegateImplementsFoundAddedItems;
    char _delegateImplementsFoundDifferences;
    char _delegateImplementsDidFinish;
}

@property (weak) id delegate;
@property unsigned long long comparisonFlags;
@property (copy) NSArray *prefetchedProperties;
@property char reportEffectivelyIdenticalItems;
@property char reportHardLinkedItems;
@property char compareRoots;
@property unsigned long long maxIterationDepth;
@property (readonly) unsigned long long currentIterationDepth;
@property (readonly) DEItem *olderTreeRoot;
@property (readonly) DEItem *newerTreeRoot;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_compareOldItem:(id)a0 newItem:(id)a1 shouldDescend:(char *)a2;
- (struct __CFArray { } *)_copyItemsForDirectory:(id)a0 treeRoot:(id)a1;
- (char)_extractBucketsForCouplet:(id)a0 removed:(id *)a1 added:(id *)a2 common:(id *)a3;
- (id)_popCouplet;
- (void)_pushCouplet:(id)a0;
- (void)_pushCouplets:(id)a0;
- (void)_runEngineForOlderTree:(id)a0 newerTree:(id)a1;
- (void)_runExtractorForCouplet:(id)a0;
- (char)_shouldExtractCouplet:(id)a0;
- (id)initWithOlderItem:(id)a0 newerItem:(id)a1;

@end
