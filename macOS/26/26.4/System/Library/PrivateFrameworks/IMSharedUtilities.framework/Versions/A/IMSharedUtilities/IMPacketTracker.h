@interface IMPacketTracker : NSObject {
    void /* unknown type, empty encoding */ expectedPackets;
    void /* unknown type, empty encoding */ trackedPacketCount;
    void /* unknown type, empty encoding */ packetBits;
    void /* unknown type, empty encoding */ expectedLastPacketBits;
}

- (BOOL)isComplete;
- (void).cxx_destruct;
- (void)reset;
- (long long)packetsExpected;
- (BOOL)isMissingAnyPacket;
- (void)setPacketsExpected:(long long)a0;
- (BOOL)trackPacket:(long long)a0 packetsExpected:(long long)a1 error:(id *)a2;

@end
