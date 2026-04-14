@class NSUUID, NSString, CSAudioStartStreamOption, CSAudioStreamRequest;
@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate>

@property BOOL streaming;
@property (retain) NSUUID *streamingUUID;
@property (weak, nonatomic) id<CSAudioStreamProviding> streamProvider;
@property (weak, nonatomic) id<CSAudioStreamProvidingDelegate> delegate;
@property (nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic) BOOL scheduledFutureSample;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) CSAudioStreamRequest *streamRequest;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) CSAudioStartStreamOption *startStreamOption;
@property (nonatomic) BOOL isWeakStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isStreaming;
- (void)startAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;
- (void)stopAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (void)audioStreamProvider:(id)a0 remoteRecorderDidDetectedTwoShotAtTime:(double)a1;
- (BOOL)prepareAudioStreamSyncWithRequest:(id)a0 error:(id *)a1;
- (BOOL)isNarrowBand;
- (id)recordSettings;
- (id)initWithAudioStreamProvider:(id)a0 streamName:(id)a1 streamRequest:(id)a2;
- (void)prepareAudioStreamWithRequest:(id)a0 completion:(id /* block */)a1;

@end
