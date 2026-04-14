@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject

@property (retain) NSHashTable *observers;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)notifyOfChangeAtColumnID:(id)a0 rowID:(id)a1 delta:(long long)a2;

@end
