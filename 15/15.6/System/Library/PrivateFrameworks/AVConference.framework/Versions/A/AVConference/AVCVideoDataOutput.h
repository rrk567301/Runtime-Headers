@class VideoAttributes, NSString, AVCStreamOutput, AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCVideoDataOutput : NSObject <AVCStreamOutputDelegate> {
    AVCStreamOutput *_streamOutput;
    AVConferenceXPCClient *_connection;
}

@property (nonatomic) char isVideoPaused;
@property (nonatomic) char isMediaStalled;
@property (nonatomic) char isVideoDegraded;
@property (nonatomic) char isVideoSuspended;
@property (nonatomic) char isValid;
@property (nonatomic) id delegate;
@property (nonatomic) struct { VideoAttributes *videoAttributes; } videoAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1 queue:(id)a2 error:(id *)a3;
- (void)streamOutput:(id)a0 didDegrade:(char)a1;
- (void)streamOutput:(id)a0 didPause:(char)a1;
- (void)streamOutput:(id)a0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)streamOutput:(id)a0 didStall:(char)a1;
- (void)streamOutput:(id)a0 didSuspend:(char)a1;
- (void)streamOutputDidBecomeInvalid:(id)a0;
- (void)streamOutputServerDidDie:(id)a0;

@end
