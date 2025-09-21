@class BWNodeOutput, BWPixelBufferPool, BWDataBufferPool, BWFormat, BWVideoFormat, BWPointCloudFormat, NSString;

@interface BWNodeOutputMediaProperties : NSObject {
    NSString *_associatedAttachedMediaKey;
    BWNodeOutput *_owningNodeOutput;
    BWFormat *_resolvedFormat;
    BWPixelBufferPool *_livePixelBufferPool;
    BWDataBufferPool *_liveDataBufferPool;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferPoolsLock;
}

@property (retain, nonatomic) BWFormat *liveFormat;
@property (readonly, nonatomic) unsigned int mediaType;
@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (retain, nonatomic) BWPixelBufferPool *preparedPixelBufferPool;
@property (nonatomic) int preparedPixelBufferPoolSize;
@property (retain, nonatomic) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) int livePixelBufferPoolSize;
@property (retain, nonatomic) BWDataBufferPool *preparedDataBufferPool;
@property (nonatomic) int preparedDataBufferPoolSize;
@property (retain, nonatomic) BWDataBufferPool *liveDataBufferPool;
@property (nonatomic) int liveDataBufferPoolSize;
@property (readonly, nonatomic) BWPixelBufferPool *preparedOrLivePixelBufferPool;
@property (readonly, nonatomic) BWDataBufferPool *preparedOrLiveDataBufferPool;
@property (readonly, nonatomic) BWVideoFormat *resolvedVideoFormat;
@property (readonly, nonatomic) BWPointCloudFormat *resolvedPointCloudFormat;
@property (nonatomic) int resolvedRetainedBufferCount;
@property (readonly, nonatomic) BWVideoFormat *liveVideoFormat;

- (void)dealloc;
- (id)init;
- (void)setPreparedSharedPixelBufferPool:(id)a0;
- (void)_makePreparedPixelBufferPoolLiveLocked;
- (void)_setOwningNodeOutput:(id)a0 associatedAttachedMediaKey:(id)a1;
- (void)setPreparedSharedDataBufferPool:(id)a0;
- (void)_makePreparedDataBufferPoolLiveLocked;
- (void)setNodePreparedDataBufferPool:(id)a0;
- (void)setNodePreparedPixelBufferPool:(id)a0;

@end
