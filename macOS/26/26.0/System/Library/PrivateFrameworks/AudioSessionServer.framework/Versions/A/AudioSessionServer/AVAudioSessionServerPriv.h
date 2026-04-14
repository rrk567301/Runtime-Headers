@class NSString, AVAudioSessionXPCServer;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionServerPriv : NSObject <AVAudioSessionServer> {
    AVAudioSessionXPCServer *_xpcServer;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)deactivateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (id)init;
- (int)activateWithFlags:(unsigned int)a0 auditToken:(const struct { unsigned int x0[8]; } *)a1 flags:(unsigned int)a2;
- (int)handleInterruptionForPid:(int)a0 audioSessionID:(unsigned int)a1 mxSessionID:(unsigned long long)a2 interruptionState:(unsigned int)a3 interruptionInfo:(struct __CFDictionary { } *)a4;
- (void)startXPCServer;
- (id)initWithAudioControlQueue:(id)a0 delegate:(id)a1;
- (int)handleInterruptionForPid:(int)a0 audioSessionID:(unsigned int)a1 interruptionState:(unsigned int)a2 interruptionInfo:(struct __CFDictionary { } *)a3;
- (void).cxx_destruct;

@end
