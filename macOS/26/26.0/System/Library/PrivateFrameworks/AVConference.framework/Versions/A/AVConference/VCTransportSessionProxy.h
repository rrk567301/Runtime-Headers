@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}

- (void)start;
- (BOOL)isIPv6;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (id)initWithTransportSessionID:(unsigned int)a0;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;

@end
