@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject

@property (retain) NSHashTable *observers;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyOfChangeAtColumnID:(id)a0 rowID:(id)a1 delta:(long long)a2;

@end
