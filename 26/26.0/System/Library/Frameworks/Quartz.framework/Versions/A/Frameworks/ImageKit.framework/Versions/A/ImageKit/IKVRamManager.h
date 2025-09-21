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
- (void)cleanup;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (void)contextWillDie:(id)a0;
- (unsigned int)vramCacheLength;
- (id)_bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (BOOL)_bindImageInVRam:(id)a0 vramNode:(id)a1;
- (BOOL)_copyImage:(id)a0 to:(id)a1 vramNode:(id)a2;
- (void)_setupSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)_unbind:(id)a0;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1;
- (void)bumpSession;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (id)cacheData;
- (void)defragment;
- (void)defragmentIfNeeded;
- (unsigned int)evaluateDefragmentation;
- (void)flushGLOperations;
- (id)initWithSharedContext:(id)a0 pixelFormat:(id)a1;
- (void)limitAmountOfMemoryUsed;
- (void)makeReadyForSharedContext:(id)a0 pixelFormat:(id)a1;
- (BOOL)needsToDefragment;
- (id)nextImageToUnbind;
- (id)priorityList;
- (id)privateSharedContext;
- (void)setCacheData:(id)a0;
- (void)setVRamCacheLength:(unsigned int)a0;
- (id)texturePacker;
- (void)unbindAll;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;

@end
