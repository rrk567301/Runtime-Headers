@class OSADictionaryHistoryItem, NSMutableArray, OSADictionaryController;

@interface OSADictionaryHistory : NSObject {
    OSADictionaryController *_dictionaryController;
    NSMutableArray *_historyItems;
    OSADictionaryHistoryItem *_currentHistoryItem;
    char _selectingObjects;
    int _addingItemCount;
}

- (void)dealloc;
- (id)dictionaryController;
- (void)setDictionaryController:(id)a0;
- (void)goBack:(id)a0;
- (char)canGoBack;
- (char)canGoForward;
- (void)goForward:(id)a0;
- (id)historyItems;
- (void)_selectHistoryItem:(id)a0;
- (void)addHistoryItemForSelectedObjects:(id)a0 inView:(id)a1;
- (void)beginAddingHistoryItemWithSelectedObjects:(id)a0 inView:(id)a1;
- (id)currentHistoryItem;
- (void)endAddingHistoryItem;
- (id)initWithDictionaryController:(id)a0;
- (void)setCurrentHistoryItem:(id)a0;
- (void)setHistoryItems:(id)a0;

@end
