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

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)bumpSession;
- (void)makeReadyForSharedContext:(id)a0 pixelFormat:(id)a1;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntriedOlderThanSessionID:(unsigned int)a0;
- (void)bumpSessionOfEntry:(unsigned long long)a0 size:(int)a1;
- (void)flushGLOperations;
- (void)_setupSharedContext:(id)a0 pixelFormat:(id)a1;
- (id)initWithSharedContext:(id)a0 pixelFormat:(id)a1;
- (id)priorityList;
- (id)texturePacker;
- (void)_unbind:(id)a0;
- (BOOL)_copyImage:(id)a0 to:(id)a1 vramNode:(id)a2;
- (BOOL)_bindImageInVRam:(id)a0 vramNode:(id)a1;
- (void)limitAmountOfMemoryUsed;
- (id)_bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (id)bindEntryInVRam:(unsigned long long)a0 size:(int)a1 asACopyOf:(id)a2;
- (void)unbindEntry:(unsigned long long)a0 size:(int)a1;
- (void)unbindEntries:(unsigned long long)a0;
- (void)unbindAll;
- (void)contextWillDie:(id)a0;
- (void)setVRamCacheLength:(unsigned int)a0;
- (unsigned int)vramCacheLength;
- (id)nextImageToUnbind;
- (id)privateSharedContext;
- (id)cacheData;
- (void)setCacheData:(id)a0;
- (unsigned int)evaluateDefragmentation;
- (BOOL)needsToDefragment;
- (void)defragmentIfNeeded;
- (void)defragment;

@end
