@protocol AVAudioSessionServerDelegate;

@interface AVAudioIONodeSessionDirectServer : NSObject <AVAudioIONodeSessionServer> {
    void *_sessionManager;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

- (void).cxx_destruct;
- (unsigned int)createIONodeWithSourceSession:(unsigned int)a0 sessionOwnerPID:(id)a1 playerType:(unsigned int)a2 error:(id *)a3;
- (id)getPropertiesIONode:(unsigned int)a0 properties:(id)a1 status:(id *)a2 error:(id *)a3;
- (id)initWithSessionManager:(void *)a0 serverDelegate:(id)a1;
- (BOOL)invalidateIONode:(unsigned int)a0 error:(id *)a1;
- (unsigned int)reconfigureIONode:(unsigned int)a0 withSourceSession:(unsigned int)a1 sessionOwnerPID:(id)a2 playerType:(unsigned int)a3 error:(id *)a4;
- (BOOL)setIONode:(unsigned int)a0 playState:(unsigned int)a1 modes:(unsigned int)a2 error:(id *)a3;
- (id)setPropertiesIONode:(unsigned int)a0 values:(id)a1 error:(id *)a2;

@end
