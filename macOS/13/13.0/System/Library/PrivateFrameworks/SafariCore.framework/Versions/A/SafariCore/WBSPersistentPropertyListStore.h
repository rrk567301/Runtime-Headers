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

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)allKeys;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)_dataRepresentation;
- (id)initWithBackingStoreURL:(id)a0;
- (void)saveAndCloseStoreSynchronously;
- (void)saveStoreSynchronously;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (void)clearStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (void)_loadDataIfNecessary;
- (void)_prepareEmptyStore;
- (id)_existingSavedData;

@end
