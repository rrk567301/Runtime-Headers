@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate, CSBundleAudioProviding;

@interface CSBundleAudioInjectionEngine : NSObject <CSBundleAudioDelegate, CSAudioInjectionEngineProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSAudioInjectionEngineDelegate> delegate;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) id<CSBundleAudioProviding> audioPlugin;
@property (nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })_defaultOutASBD;
- (id)_compensateChannelDataIfNeeded:(id)a0 receivedNumChannels:(unsigned int)a1;
- (BOOL)attachDevice:(id)a0 withOutError:(id *)a1;
- (void)audioBufferAvailable:(id)a0;
- (void)audioStreamDidStartSuccessfully:(BOOL)a0 error:(id)a1;
- (void)audioStreamDidStopSuccessfully:(BOOL)a0 error:(id)a1;
- (id)initWithStreamHandleId:(unsigned long long)a0;
- (BOOL)setPluginBundleWithPath:(id)a0 withOutError:(id *)a1;
- (BOOL)startAudioStreamWithOption:(id)a0 withOutError:(id *)a1;
- (BOOL)stopAudioStreamWithOutError:(id *)a0;

@end
