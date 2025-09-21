@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue, AVCCaptionsClientDelegate;

@interface AVCCaptionsClient : NSObject {
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly, nonatomic) char isCaptioningSupported;

@property (readonly) id<AVCCaptionsClientDelegate> delegate;
@property (readonly) char captionsSupported;
@property (readonly) char captionsEnabled;
@property (readonly) long long streamToken;

+ (id)serializeConfiguration:(id)a0;

- (void)dealloc;
- (void)disconnect;
- (char)connect;
- (void)enableCaptions:(char)a0;
- (id)captionsResultsWithInternalResults:(id)a0;
- (void)configureCaptions:(id)a0;
- (void)deregisterBlocksForNotifications;
- (void)didDetectGibberish:(char)a0;
- (void)didDisableCaptions:(char)a0 error:(id)a1;
- (void)didEnableCaptions:(char)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(unsigned char)a0;
- (void)didStopCaptioningWithReason:(unsigned char)a0;
- (void)didUpdateCaptions:(id)a0 isRemote:(char)a1;
- (id)initWithDelegate:(id)a0 streamToken:(long long)a1;
- (void)registerBlocksForNotifications;

@end
