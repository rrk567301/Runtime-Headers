@class NSMutableDictionary, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSPersistentPropertyListStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_store;
    WBSCoalescedAsynchronousWriter *_writer;
}

@property (copy, nonatomic) id /* block */ createEmptyStoreHandler;
@property (copy, nonatomic) id /* block */ validateLoadedStoreHandler;

- (id)dataForKey:(id)a0;
- (void)_prepareEmptyStore;
- (id)allKeys;
- (id)stringForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)saveStoreSynchronously;
- (id)objectForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)saveAndCloseStoreSynchronously;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (id)_dataRepresentation;
- (id)dateForKey:(id)a0;
- (void).cxx_destruct;
- (void)_loadDataIfNecessary;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)_existingSavedData;
- (void)clearStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0;

@end
