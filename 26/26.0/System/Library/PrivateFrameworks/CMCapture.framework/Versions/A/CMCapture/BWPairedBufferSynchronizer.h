@interface BWPairedBufferSynchronizer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct opaqueCMSimpleQueue { } *_primarySampleBufferQueue;
    struct opaqueCMSimpleQueue { } *_secondarySampleBufferQueue;
    struct opaqueCMSampleBuffer { } *_secondaryFallbackSampleBuffer;
}

@property (nonatomic) BOOL secondaryStreamComplete;

+ (void)initialize;

- (void)dealloc;
- (id)initWithCapacity:(int)a0;
- (void)flush;
- (void)addPrimaryBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)addSecondaryBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct { struct opaqueCMSampleBuffer *x0; struct opaqueCMSampleBuffer *x1; })getSynchronizedBufferPair;

@end
