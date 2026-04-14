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

- (id)stringForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)_loadDataIfNecessary;
- (id)objectForKey:(id)a0;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)_existingSavedData;
- (id)_dataRepresentation;
- (void)saveStoreSynchronously;
- (void)clearStoreSynchronously;
- (id)initWithBackingStoreURL:(id)a0 fileResourceValues:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithBackingStoreURL:(id)a0;
- (id)dateForKey:(id)a0;
- (void)saveAndCloseStoreSynchronously;
- (void)_prepareEmptyStore;
- (id)allKeys;

@end
