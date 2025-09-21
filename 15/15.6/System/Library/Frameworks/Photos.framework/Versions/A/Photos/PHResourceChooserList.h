@class NSSortDescriptor, NSArray, NSMutableArray, NSManagedObjectContext;
@protocol PHResourceChooserAsset;

@interface PHResourceChooserList : NSObject {
    id<PHResourceChooserAsset> _asset;
    id /* block */ _itemHandler;
    id /* block */ _endOfListHandler;
    NSArray *_nonHintResourceInfos;
    long long _hintDataCurrentOffset;
    long long _hintDataNextItemOffset;
    char _finishedPresentingFromHints;
    char _didObserveThumbnailStoreKey;
    NSSortDescriptor *_sortDescriptor;
    NSManagedObjectContext *_context;
    NSArray *_unvisitedNonHintResourcesInfos;
    unsigned long long _lastPresentedFullResourceIndex;
    char _finishedPresentingFromFetchedResources;
    NSMutableArray *_visitedKeys;
    unsigned long long _enumerationDirection;
}

- (id)init;
- (void).cxx_destruct;
- (char)reversed;
- (void)continueEnumeratingWithSourceOptions:(unsigned long long)a0;

@end
