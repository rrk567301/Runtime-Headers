@interface IDSPacketDeduplicator : NSObject {
    void /* unknown type, empty encoding */ state;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)markPacketAsReceivedWithSequenceNumber:(unsigned short)a0;

@end
