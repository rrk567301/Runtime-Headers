@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}

- (void)start;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (BOOL)isIPv6;
- (id)initWithTransportSessionID:(unsigned int)a0;

@end
