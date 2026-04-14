@class NSString, NSDictionary, NSError, NSMutableArray;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {
    NSError *_error;
    struct CGImage { } *_imageRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isCancelled;
    NSMutableArray *_handlersWaitingOnResult;
}

@property (nonatomic) int imageRequestIDForPopulatingCache;
@property (readonly, nonatomic) NSDictionary *additionalInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCancelled;
- (void)cancel;
- (void)populateWithImageRef:(struct CGImage { } *)a0 additionalInfo:(id)a1 error:(id)a2 executeBeforeNotifyingWaitersBlock:(id /* block */)a3;
- (void)addNotifyHandler:(id /* block */)a0;
- (BOOL)hasImageRef;
- (void)dealloc;
- (void)_callWaiters:(id)a0 wasCancelled:(BOOL)a1;
- (void).cxx_destruct;
- (struct CGImage { } *)createImageRef;
- (void)prepareForReuse;
- (id)init;

@end
