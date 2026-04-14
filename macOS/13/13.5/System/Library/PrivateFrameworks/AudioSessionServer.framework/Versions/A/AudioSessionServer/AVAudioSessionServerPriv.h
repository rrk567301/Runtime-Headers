@class AVAudioSessionXPCServer;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionServerPriv : NSObject {
    AVAudioSessionXPCServer *_xpcServer;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAudioControlQueue:(id)a0 delegate:(id)a1;

@end
