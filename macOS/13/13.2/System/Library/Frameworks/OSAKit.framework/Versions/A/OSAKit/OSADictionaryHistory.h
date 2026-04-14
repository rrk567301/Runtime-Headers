@class OSADictionaryHistoryItem, NSMutableArray, OSADictionaryController;

@interface OSADictionaryHistory : NSObject {
    OSADictionaryController *_dictionaryController;
    NSMutableArray *_historyItems;
    OSADictionaryHistoryItem *_currentHistoryItem;
    BOOL _selectingObjects;
    int _addingItemCount;
}

- (void)dealloc;
- (void)setDictionaryController:(id)a0;
- (id)dictionaryController;
- (void)goBack:(id)a0;
- (void)goForward:(id)a0;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)historyItems;
- (id)initWithDictionaryController:(id)a0;
- (void)setHistoryItems:(id)a0;
- (id)currentHistoryItem;
- (void)setCurrentHistoryItem:(id)a0;
- (void)beginAddingHistoryItemWithSelectedObjects:(id)a0 inView:(id)a1;
- (void)endAddingHistoryItem;
- (void)addHistoryItemForSelectedObjects:(id)a0 inView:(id)a1;
- (void)_selectHistoryItem:(id)a0;

@end
