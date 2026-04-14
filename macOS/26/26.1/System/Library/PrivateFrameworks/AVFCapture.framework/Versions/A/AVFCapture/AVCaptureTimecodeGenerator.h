@class NSMutableArray, NSArray, NSOperationQueue, AVCaptureTimecodeSource, NSObject, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue, AVCaptureTimecodeGeneratorDelegate;

@interface AVCaptureTimecodeGenerator : NSObject {
    NSOperationQueue *_statusNotificationSchedulingQueue;
    struct { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; } x0; unsigned long long x1; } *_timecodeRingBuffer;
    unsigned long long _timecodeRingBufferHead;
    BOOL _isTimecodeRingBufferFull;
    unsigned long long _timecodeRingBufferCapacity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceLock;
    double _timecodeRingBufferIngestTimeStamp;
    NSOperationQueue *_ringBufferStatusPollingQueue;
    long long _synchronizationStatus;
    unsigned int _midiSourceDiscoveryClient;
    unsigned int _midiClient;
    unsigned int _midiInputPort;
    double _localGMTOffset;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _machTimebase;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSMutableArray *_mutableSynchronizationSources;
}

@property (class, readonly, nonatomic) AVCaptureTimecodeSource *frameCountSource;
@property (class, readonly, nonatomic) AVCaptureTimecodeSource *realTimeClockSource;

@property (readonly, copy) NSArray *availableSources;
@property (readonly, nonatomic) AVCaptureTimecodeSource *currentSource;
@property (readonly, nonatomic) id<AVCaptureTimecodeGeneratorDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) double synchronizationTimeout;
@property (nonatomic) double timecodeAlignmentOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timecodeFrameDuration;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)callbackQueue;
- (void)dealloc;
- (id)init;
- (void)_registerSynchronizationSource:(id)a0;
- (void)_addTimecodeToRingBuffer:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; })a0 timestamp:(unsigned long long)a1;
- (BOOL)_isTimecodeRingBufferEmpty;
- (BOOL)_isTimecodeRingBufferStale;
- (struct { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; } x0; unsigned long long x1; })_newestTimecodeRingBufferEntry;
- (void)_notifyDelegateOfSourceListUpdate:(id)a0;
- (void)_notifyDelegateOfSynchronizationStatusChange:(long long)a0 filterRedundancy:(BOOL)a1;
- (void)_notifyDelegateOfTimecodeUpdate:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; })a0;
- (void)_openMidiTimecodeDataStreamWithUUID:(id)a0 success:(BOOL *)a1;
- (void)_pollRingBufferStatus;
- (void)_registerMidiEndpointAsSynchronizationSource:(unsigned int)a0;
- (void)_removeMidiEndpointAsSynchronizationSource:(unsigned int)a0;
- (void)_removeSynchronizationSource:(id)a0;
- (void)_resetTimecodeRingBuffer;
- (void)_scheduleTimecodeRingBufferPolling;
- (double)_timeOfDay;
- (BOOL)_timecodeIsCoherent:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; })a0;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; struct { long long x0; int x1; unsigned int x2; long long x3; } x5; long long x6; })generateInitialTimecode;
- (void)startExternalSourceObserver;
- (void)startSynchronizationWithTimecodeSource:(id)a0;

@end
