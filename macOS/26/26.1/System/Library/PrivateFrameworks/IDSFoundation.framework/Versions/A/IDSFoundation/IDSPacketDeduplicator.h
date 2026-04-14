@interface IDSPacketDeduplicator : NSObject {
    void /* unknown type, empty encoding */ state;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)markPacketAsReceivedWithSequenceNumber:(unsigned short)a0;

@end
