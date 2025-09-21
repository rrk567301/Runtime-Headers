@class NSMutableDictionary, NSOperationQueue, NSURL, NSLock;

@interface FRJSStorage : FRJSObject

@property (retain, nonatomic) NSOperationQueue *diskAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *store;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSLock *storeLock;

- (void)clear;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (void)_readStoreFromDisk;
- (void)_writeStoreToDisk;

@end
