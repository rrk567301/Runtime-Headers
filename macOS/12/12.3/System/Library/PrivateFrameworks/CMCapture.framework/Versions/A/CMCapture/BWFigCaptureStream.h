@class NSString, NSDictionary, NSMutableDictionary;
@protocol BWFigCaptureStreamStartStopDelegate;

@interface BWFigCaptureStream : NSObject {
    struct OpaqueFigCaptureStream { } *_stream;
    NSString *_portTypeShortString;
    NSMutableDictionary *_cachedProperties;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _ktraceCodePrefix;
}

@property (readonly) struct OpaqueFigCaptureStream { } *figCaptureStream;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDictionary *supportedProperties;
@property (nonatomic) id<BWFigCaptureStreamStartStopDelegate> startStopDelegate;
@property (nonatomic) BOOL calibrationDataSent;
@property (readonly, nonatomic) BOOL streaming;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (int)start;
- (int)stop;
- (int)setProperty:(struct __CFString { } *)a0 value:(id)a1;
- (int)setPropertyIfSupported:(struct __CFString { } *)a0 value:(id)a1;
- (id)getPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (id)getProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (id)copyProperty:(struct __CFString { } *)a0 error:(int *)a1;
- (int)registerForNotification:(struct __CFString { } *)a0 listener:(const void *)a1 callback:(void /* function */ *)a2;
- (int)unregisterForNotification:(struct __CFString { } *)a0 listener:(const void *)a1;
- (int)addAttachmentsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (id)copyPropertyIfSupported:(struct __CFString { } *)a0 error:(int *)a1;
- (int)sendCommandProperty:(struct __CFString { } *)a0;
- (id)initWithFigCaptureStream:(struct OpaqueFigCaptureStream { } *)a0;
- (void)flushPropertyCache;
- (void)synchronizedStreamsGroupWillStop;
- (void)synchronizedStreamsGroupDidStop;

@end
