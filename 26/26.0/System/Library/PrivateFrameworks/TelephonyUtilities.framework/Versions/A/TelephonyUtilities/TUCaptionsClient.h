@class NSString, AVCCaptionsClient;
@protocol TUCaptionsClientDelegate;

@interface TUCaptionsClient : NSObject <AVCCaptionsClientDelegate, TUCallCenterDelegate>

@property (readonly) id<TUCaptionsClientDelegate> delegate;
@property (readonly) AVCCaptionsClient *avcCaptionsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enableCaptions:(BOOL)a0;
- (void)callCenter:(id)a0 receivedCaptions:(id)a1;
- (void)captionsClient:(id)a0 didDetectGibberish:(BOOL)a1;
- (void)captionsClient:(id)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)captionsClient:(id)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)captionsClient:(id)a0 didUpdateCaptions:(id)a1 source:(int)a2;
- (void)captionsServerDidDie:(id)a0;
- (void)configureCaptions:(id)a0;
- (id)initWithDelegate:(id)a0 call:(id)a1;

@end
