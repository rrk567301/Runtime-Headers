@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {
    BOOL _downstreamIsSharingOutputPool;
    BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
    BWPhotoDecompressor *_photoDecompressor;
    BWPhotoDecompressor *_synchronizedSlavePhotoDecompressor;
    NSMutableArray *_emitSampleBufferSemaphores;
    NSMutableArray *_emitSynchronizedSlaveSampleBufferSemaphores;
    NSMutableSet *_disabledSynchronizedSlaveSemaphores;
    int _numberOfTimesWaited;
    int _numberOfBuffersEmitted;
    int _numberOfTimesSynchronizedSlaveWaited;
    int _numberOfSynchronizedSlaveBuffersEmitted;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)setDownstreamIsSharingOutputPool:(BOOL)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)addEmitSampleBufferSemaphore:(id)a0;
- (void)dealloc;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)a0;
- (void)suspendResources;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)a0;
- (BOOL)downstreamIsSharingOutputPool;

@end
