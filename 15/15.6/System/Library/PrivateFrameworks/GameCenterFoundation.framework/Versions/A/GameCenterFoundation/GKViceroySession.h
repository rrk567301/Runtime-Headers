@class GKSession, GKSessionInternal;

@interface GKViceroySession : GKSession

@property (retain, nonatomic) GKSession *gkSession;
@property (retain, nonatomic) GKSessionInternal *session;
@property (readonly) id viceroyInternalSession;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)displayName;
- (char)isAvailable;
- (char)isBusy;
- (void)setBusy:(char)a0;
- (void)setAvailable:(char)a0;
- (id)sessionID;
- (id)peerID;
- (id)privateDelegate;
- (void)setPrivateDelegate:(id)a0;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (int)sessionMode;
- (char)acceptConnectionFromPeer:(id)a0 error:(id *)a1;
- (void)cancelConnectToPeer:(id)a0;
- (void)connectToPeer:(id)a0 withTimeout:(double)a1;
- (void)denyConnectionFromPeer:(id)a0;
- (void)disableWifi;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)a0;
- (double)disconnectTimeout;
- (id)displayNameForPeer:(id)a0;
- (id)initWithGKSession:(id)a0 sessionID:(id)a1 displayName:(id)a2 sessionMode:(int)a3;
- (char)isPeerBusy:(id)a0;
- (char)isWrappingGKSession:(id)a0;
- (id)peersWithConnectionState:(int)a0;
- (char)sendData:(id)a0 toPeers:(id)a1 withDataMode:(int)a2 error:(id *)a3;
- (char)sendDataToAllPeers:(id)a0 withDataMode:(int)a1 error:(id *)a2;
- (void)setDataReceiveHandler:(id)a0 withContext:(void *)a1;
- (void)setDisconnectTimeout:(double)a0;
- (id)voiceChatWithName:(id)a0 players:(id)a1;

@end
