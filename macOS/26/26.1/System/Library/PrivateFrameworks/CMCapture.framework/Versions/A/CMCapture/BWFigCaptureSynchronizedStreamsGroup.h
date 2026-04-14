@class NSArray, NSDictionary, BWFigCaptureStreamsMapper, BWFigCaptureStream;

@interface BWFigCaptureSynchronizedStreamsGroup : NSObject {
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } *_syncGroup;
    BWFigCaptureStream *_synchronizationMaster;
    BWFigCaptureStream *_defaultSynchronizationMaster;
    BOOL _invalidated;
    BWFigCaptureStreamsMapper *_streamsMapper;
    NSArray *_activeStreams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) NSDictionary *supportedProperties;
@property (readonly) NSArray *streams;
@property (readonly) BOOL synchronizationMasterIsConfigurable;
@property (retain) BWFigCaptureStream *synchronizationMaster;
@property (readonly) BOOL stopSupported;

+ (void)initialize;

- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)activeStreams;
- (void)invalidate;
- (int)setActiveStreams:(id)a0;
- (int)setMasterStream:(id)a0 slaveConfigurationsByPortType:(id)a1;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (void)dealloc;
- (int)stop;
- (int)setCameraControlsMasterStream:(id)a0;
- (id)initWithFigCaptureSynchronizedStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { } *)a0 bwFigCaptureStreams:(id)a1 figCaptureStreams:(id)a2;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;

@end
