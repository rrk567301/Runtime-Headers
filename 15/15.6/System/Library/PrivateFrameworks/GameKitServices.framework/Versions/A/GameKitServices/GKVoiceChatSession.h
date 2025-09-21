@class NSString, NSArray;
@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject {
    id opaqueSession;
}

@property id<GKVoiceChatSessionDelegate> delegate;
@property (readonly) NSString *sessionName;
@property (readonly) NSArray *peerList;
@property (getter=isActiveSession) char activeSession;
@property (readonly) float inputMeter;
@property float sessionVolume;

- (void)dealloc;
- (void)stopSession;
- (void)startSession;
- (id)initWithGKSession:(id)a0 sessionName:(id)a1;
- (void)setMute:(char)a0 forPeer:(id)a1;
- (char)didReceiveVoiceChatData:(id)a0 fromPeerID:(id)a1;
- (char)getMuteStateForPeer:(id)a0;
- (id)initWithGameStateSession:(id)a0 sessionName:(id)a1;
- (float)outputMeterForPeer:(id)a0;
- (void)peer:(id)a0 didChangeState:(unsigned int)a1;

@end
