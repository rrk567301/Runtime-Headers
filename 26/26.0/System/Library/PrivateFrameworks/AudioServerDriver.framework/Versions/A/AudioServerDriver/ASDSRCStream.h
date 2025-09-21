@class NSArray, ASDAudioDevice, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSRCStream : ASDStream {
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDSRCStreamHelper, std::default_delete<ASDSRCStreamHelper>> { struct ASDSRCStreamHelper *__ptr_; } _streamHelper;
    NSObject<OS_dispatch_queue> *_srcQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isRunning;
    long long _maximumFramesPerIOCycle;
    long long _ioReferenceCount;
}

@property (copy, nonatomic) NSArray *underlyingStreams;
@property (readonly, nonatomic) long long maximumFramesPerIOCycle;

- (void)setIsActive:(BOOL)a0;
- (void)startStream;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopStream;
- (id)initWithDirection:(unsigned int)a0 withPlugin:(id)a1;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (BOOL)_allocateStreamingResources;
- (void)_deallocateStreamingResources;
- (void)_updateLatency;
- (void)_updateMaximumFramesPerIOCycle;
- (BOOL)changePhysicalFormat:(id)a0;
- (id)initWithOwningDevice:(id)a0 underlyingStreams:(id)a1 direction:(unsigned int)a2 plugin:(id)a3;
- (id /* block */)readIsolatedInputBlock;
- (void)updateLatency;

@end
