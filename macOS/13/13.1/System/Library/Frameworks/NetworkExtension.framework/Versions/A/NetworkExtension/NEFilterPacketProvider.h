@interface NEFilterPacketProvider : NEFilterProvider

@property (copy) id /* block */ packetHandler;

- (void).cxx_destruct;
- (id)delayCurrentPacket:(id)a0;
- (void)allowPacket:(id)a0;

@end
