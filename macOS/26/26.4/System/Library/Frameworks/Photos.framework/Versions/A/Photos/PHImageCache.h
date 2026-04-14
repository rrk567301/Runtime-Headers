@class NSMutableDictionary, PHRecyclableObjectVendor;
@protocol PHImageCacheDelegate;

@interface PHImageCache : NSObject {
    NSMutableDictionary *_backingDictionary;
    NSMutableDictionary *_uncommittedInserts;
    NSMutableDictionary *_uncommittedDeletes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PHRecyclableObjectVendor *_entryVendor;
}

@property (weak, nonatomic) id<PHImageCacheDelegate> delegate;

- (void)removeAllEntries;
- (BOOL)pinEntryForKey:(id)a0 requestID:(int)a1 inFlightRequestID:(int *)a2;
- (void)queryEntryForKey:(id)a0 didWaitForInFlightRequest:(BOOL *)a1 didFindImage:(BOOL *)a2 entryIsValidBlock:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_removeEntry:(id)a0;
- (void)removeEntriesForKeys:(id)a0;
- (id)init;
- (BOOL)populateEntryWithImage:(struct CGImage { } *)a0 requestID:(int)a1 forKey:(id)a2 additionalInfo:(id)a3;
- (void)commitChangesWithQueueToProcessDeletes:(id)a0;

@end
