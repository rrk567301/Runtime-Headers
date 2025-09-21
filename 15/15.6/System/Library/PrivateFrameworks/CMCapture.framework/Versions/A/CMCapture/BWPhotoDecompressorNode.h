@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {
    char _downstreamIsSharingOutputPool;
    char _synchronizedSlaveAttachedMediaDecompressionEnabled;
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

- (void)dealloc;
- (id)nodeType;
- (void)addEmitSampleBufferSemaphore:(id)a0;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (char)downstreamIsSharingOutputPool;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(char)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setDownstreamIsSharingOutputPool:(char)a0;
- (void)suspendResources;

@end
