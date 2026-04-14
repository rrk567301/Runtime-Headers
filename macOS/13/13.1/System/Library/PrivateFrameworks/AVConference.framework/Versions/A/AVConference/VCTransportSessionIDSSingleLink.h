@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS

- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)onStart;
- (void)handleLinkConnectedWithInfo:(id)a0;
- (void)handleLinkDisconnectedWithInfo:(id)a0;
- (int)updateTransportStream:(struct OpaqueVCTransportStream { } *)a0;

@end
