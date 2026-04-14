@class SCContentFilter, NSString, SCContentSharingSession, NSArray, NSObject, SCStreamConfiguration;
@protocol SCStreamOutput, OS_dispatch_queue, SCStreamDelegate;

@interface SCStream : NSObject <SCContentSharingSessionProtocol> {
    SCContentFilter *_streamFilter;
    SCStreamConfiguration *_streamConfig;
    struct opaqueSCRemoteQueue { } *_videoReceiveQueue;
    struct opaqueSCRemoteQueue { } *_audioReceiveQueue;
    double _totalLatency;
    double _frameCount;
    double _totalLatencyAudio;
    double _frameCountAudio;
    SCContentSharingSession *_sharingSession;
    NSArray *_sessionExcludedList;
    BOOL _shouldUpdateMetadata;
    id<SCStreamOutput> _screenStreamOutput;
    id<SCStreamOutput> _audioStreamOutput;
    NSObject<OS_dispatch_queue> *_screenSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_audioSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_streamQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _streamLock;
    BOOL _audioEnabled;
    BOOL _isRunning;
    struct OpaqueCMClock { } *_audioClock;
    struct OpaqueCMClock { } *_hostClock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<SCStreamDelegate> delegate;
@property (readonly, nonatomic) NSString *streamID;
@property (readonly, nonatomic) struct OpaqueCMClock { } *synchronizationClock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSharingSession:(id)a0 captureOutputProperties:(id)a1 delegate:(id)a2;
- (void)stopCaptureWithCompletionHandler:(id /* block */)a0;
- (BOOL)addStreamOutput:(id)a0 type:(long long)a1 sampleHandlerQueue:(id)a2 error:(id *)a3;
- (void)startCaptureWithCompletionHandler:(id /* block */)a0;
- (id)initWithFilter:(id)a0 configuration:(id)a1 delegate:(id)a2;
- (id)initWithFilter:(id)a0 captureOutputProperties:(id)a1 delegate:(id)a2;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)sessionDidEnd:(id)a0;
- (void)sessionDidChangeContent:(id)a0;
- (void)updateContentFilter:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateStreamConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeStreamOutput:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)serializedContentFilterWithExclusionList:(id)a0;
- (id)serializeStreamProperties;
- (double)getAverageLatency;
- (double)getAverageLatencyAudio;
- (id)collectStreamData;
- (id)initWithSharingSession:(id)a0 excluding:(id)a1 updateMetadata:(BOOL)a2 captureOutputProperties:(id)a3 delegate:(id)a4;
- (void)startRemoteReceiveQueue:(id)a0;
- (void)startRemoteVideoReceiveQueue:(id)a0;
- (void)startRemoteAudioReceiveQueue:(id)a0;
- (void)stopRemoteReceiveQueue:(unsigned char)a0;

@end
