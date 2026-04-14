@interface IDSObjCPacketLog : NSObject {
    void /* unknown type, empty encoding */ packetLog;
    void /* unknown type, empty encoding */ sessionID;
}

- (void)finish;
- (id)init;
- (void)flush;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 write:(id /* block */)a1;
- (long long)packetLogIDWithLinkID:(char)a0 delegatedLinkID:(char)a1 protocolStack:(id)a2 connectionID:(unsigned long long)a3;
- (void)recordPacketsWithPacketLogID:(long long)a0 kind:(long long)a1 bytes:(long long)a2 packetCount:(long long)a3;
- (id)initWithSessionID:(id)a0 processName:(id)a1;

@end
