@interface NetworkInfo.NetworkInfoPacketCaptureurDelegate : NSObject <PacketCaptureurDelegate> {
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)packetCaptureurTaskStatusChangedFor:(id)a0 toStatus:(int)a1;

@end
