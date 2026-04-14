@class NSXPCConnection, NSString, NSXPCListenerEndpoint, LBAudioStreamConfiguration, LBAudioStreamInfo, NSObject, CSStateMachine, NSMutableArray, CSFAudioConverter;
@protocol OS_dispatch_queue, LBAudioStreamProvidingDelegate;

@interface LBAudioStreamProvider : NSObject <LBAudioStreamProviderServiceDelegate, CSStateMachineDelegate, CSFAudioConverterDelegate, LBAudioStreamProviding>

@property (nonatomic) BOOL isProvidingStream;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *xpcListenerEndpoint;
@property (retain, nonatomic) CSStateMachine *stateMachine;
@property (copy, nonatomic) LBAudioStreamConfiguration *streamConfiguration;
@property (copy, nonatomic) LBAudioStreamInfo *incomingStreamInfo;
@property (copy, nonatomic) LBAudioStreamInfo *outgoingStreamInfo;
@property (retain, nonatomic) NSMutableArray *incomingAudioChunks;
@property (nonatomic) unsigned long long currentOutgoingStreamIndex;
@property (retain, nonatomic) CSFAudioConverter *opusConverter;
@property (nonatomic) BOOL hasStartedEncodingPaackets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LBAudioStreamProvidingDelegate> streamProviderDelegate;

- (id)_connection;
- (id)initWithDelegate:(id)a0;
- (id)_stateName:(unsigned long long)a0;
- (void)_invalidate;
- (void)didIgnoreEvent:(long long)a0 from:(long long)a1;
- (void).cxx_destruct;
- (id)_newConnection;
- (id)_eventName:(unsigned long long)a0;
- (void)didTransitFrom:(long long)a0 to:(long long)a1 by:(long long)a2;
- (void)audioConverterDidConvertPackets:(id)a0 packets:(id)a1 durationInSec:(float)a2 timestamp:(unsigned long long)a3 arrivalTimestampToAudioRecorder:(unsigned long long)a4;
- (void)_setupStateMachine;
- (id)_service;
- (void)setStreamingDelegate:(id)a0;
- (void)stopStreaming;
- (void)startStreaming:(id)a0;
- (void)_cleanupStreamInfo;
- (void)_convertChunksToOpus:(id)a0;
- (void)_didReceiveAudioChunks:(id)a0;
- (void)_didStartStreamingWithInfo:(id)a0;
- (void)_didStopStreamingWithError:(id)a0;
- (void)_flushConversionBufferIfNecessary;
- (BOOL)_formatIsSupported:(long long)a0;
- (void)_interruptionHandler:(id)a0;
- (void)_invalidationHandler:(id)a0;
- (void)_notifyDelegateOfChunks:(id)a0 fromFormat:(long long)a1 toFormat:(long long)a2;
- (void)_notifyDelegateOfFloatConvertedChunks:(id)a0;
- (void)_notifyDelegateOfNativeChunks:(id)a0;
- (void)_notifyDelegateOfShortConvertedChunks:(id)a0;
- (void)_resetStreamInfo;
- (id)_sanitizeStreamConfiguration:(id)a0;
- (void)_startStreaming:(id)a0;
- (void)_stopStreaming;
- (oneway void)didReceiveAudioChunks:(id)a0;
- (oneway void)didStartStreamingWithInfo:(id)a0;
- (oneway void)didStopStreamingWithError:(id)a0;
- (id)initWithDelegate:(id)a0 xpcListenerEndpoint:(id)a1;

@end
