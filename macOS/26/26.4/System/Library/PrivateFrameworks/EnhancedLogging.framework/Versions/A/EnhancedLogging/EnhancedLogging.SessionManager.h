@interface EnhancedLogging.SessionManager : _TtCs12_SwiftObject <EnhancedLogging.ClientXPCInterface> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ currentSessionQueue;
    void /* unknown type, empty encoding */ _currentSession;
}

- (void)session:(id)a0 didEndWithError:(id)a1;
- (void)session:(id)a0 didDiscoverDevices:(id)a1;
- (void)session:(id)a0 didUpdateCollectionProgress:(id)a1;
- (void)session:(id)a0 didUpdateCompressionProgress:(long long)a1 totalBytes:(long long)a2 deviceID:(id)a3;
- (void)session:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (void)session:(id)a0 didUpdateUploadProgress:(long long)a1 totalBytes:(long long)a2 deviceID:(id)a3;
- (void)sessionCreatedWithSessionID:(id)a0;
- (void)sessionEndedWithSessionID:(id)a0;

@end
