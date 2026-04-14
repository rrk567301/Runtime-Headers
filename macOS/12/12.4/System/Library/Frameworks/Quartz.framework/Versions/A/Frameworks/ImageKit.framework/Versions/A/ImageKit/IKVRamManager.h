@class IKLinkedList, NSOpenGLContext, IKTexturePacker, IKCacheData;
@protocol IKVRamManagerDelegateProtocol;

@interface IKVRamManager : NSObject {
    id<IKVRamManagerDelegateProtocol> _delegate;
    IKTexturePacker *_texturePacker;
    IKCacheData *_cache;
    IKLinkedList *_vramBindPriorityList;
    unsigned int _vramCacheLength;
    unsigned int _vramCacheUsed;
    unsigned int _session;
    NSOpenGLContext *_sharedContext;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (id)nextImageToUnbind;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1;
- (void)flushGLOperations;
- (unsigned int)vramCacheLength;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)makeReadyForSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)defragmentIfNeeded;
- (void)setCacheData:(id)a0;
- (id)initWithSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindAll;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (id)privateSharedContext;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (void)_setupSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)_unbind:(id)a0;
- (void)limitAmountOfMemoryUsed;
- (BOOL)_copyImage:(id)a0 to:(id)a1 vramNode:(id)a2;
- (BOOL)_bindImageInVRam:(id)a0 vramNode:(id)a1;
- (id)_bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (id)texturePacker;
- (id)cacheData;
- (unsigned int)evaluateDefragmentation;
- (BOOL)needsToDefragment;
- (void)defragment;
- (id)priorityList;
- (void)contextWillDie:(id)a0;
- (void)setVRamCacheLength:(unsigned int)a0;

@end
