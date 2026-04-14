@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}

- (void)start;
- (BOOL)isIPv6;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (id)initWithTransportSessionID:(unsigned int)a0;

@end
