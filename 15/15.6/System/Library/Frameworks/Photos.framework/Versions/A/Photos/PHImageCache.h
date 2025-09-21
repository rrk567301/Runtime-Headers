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

- (id)init;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)_removeEntry:(id)a0;
- (void)commitChangesWithQueueToProcessDeletes:(id)a0;
- (char)pinEntryForKey:(id)a0 requestID:(int)a1 inFlightRequestID:(int *)a2;
- (char)populateEntryWithImage:(struct CGImage { } *)a0 requestID:(int)a1 forKey:(id)a2 additionalInfo:(id)a3;
- (void)queryEntryForKey:(id)a0 didWaitForInFlightRequest:(char *)a1 didFindImage:(char *)a2 entryIsValidBlock:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (void)removeEntriesForKeys:(id)a0;

@end
