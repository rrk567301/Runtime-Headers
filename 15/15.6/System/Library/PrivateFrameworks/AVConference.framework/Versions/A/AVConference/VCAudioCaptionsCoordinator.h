@class VCAudioCaptionsBufferInfoCollection, NSString, VCAudioCaptions, NSObject, VCCaptionsGibberishDetector;
@protocol VCCaptionsSourceDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCAudioCaptionsCoordinator : VCObject <VCAudioCaptionsDelegate, VCCaptionsSource> {
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct opaqueRTCReporting { } *_reportingAgent;
    VCCaptionsGibberishDetector *_gibberishDetector;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    char _invalidated;
    NSObject<OS_dispatch_semaphore> *_startStopSemaphore;
    VCAudioCaptions *_audioCaptions;
    VCAudioCaptionsBufferInfoCollection *_bufferInfos;
    char _oneToOneEnabled;
    struct tagVCAudioCaptionsCoordinatorVoiceDetectorInfo { struct opaqueVCVoiceDetector *voiceDetector; char isVoiceDetectorRunning; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } lastUsedAudioFormat; } _voiceDetectorInfoPrimary;
    struct tagVCAudioCaptionsCoordinatorVoiceDetectorInfo { struct opaqueVCVoiceDetector *voiceDetector; char isVoiceDetectorRunning; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } lastUsedAudioFormat; } _voiceDetectorInfoSecondary;
    double _lowPriorityThresholdSeconds;
    struct __CFAllocator { } *_secondarySamplesAllocator;
    struct __CFAllocator { } *_secondarySampleBufferInfoAllocator;
    struct opaqueCMSimpleQueue { } *_secondarySamplesQueue;
    unsigned int _ignoreCaptionsForThreads;
    char _forceCaptionsVoiceDetection;
}

@property (nonatomic) long long currentlyCaptionedStreamToken;
@property (nonatomic) long long state;
@property (readonly, nonatomic) char captionsSupported;
@property (readonly, nonatomic) char captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (struct os_unfair_lock_s { unsigned int x0; } *)stateLock;
- (void)setOneToOneModeEnabled:(char)a0;
- (void)enableCaptions:(char)a0;
- (void)prewarmCaptions;
- (id)captionsDelegate;
- (void)cleanUpSecondaryBufferQueue;
- (void)didDisableCaptions:(char)a0 error:(id)a1;
- (void)didEnableCaptions:(char)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didStopCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didUpdateCaptions:(id)a0;
- (id)initWithOneToOneEnabled:(char)a0 isLocal:(char)a1 taskIdentifier:(id)a2 reportingAgent:(struct opaqueRTCReporting { } *)a3;
- (char)lockedCaptionsEnabled;
- (void)lockedEnableCaptions:(char)a0;
- (void)registerCaptionsEventDelegate:(id)a0;
- (char)registerStreamWithConfig:(const struct tagVCAudioCaptionsStreamConfig { long long x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; char x2; } *)a0;
- (void)setCaptionsLocale:(id)a0;
- (void)setCaptionsUsage:(id)a0;
- (char)setUpSecondaryBufferQueue;

@end
