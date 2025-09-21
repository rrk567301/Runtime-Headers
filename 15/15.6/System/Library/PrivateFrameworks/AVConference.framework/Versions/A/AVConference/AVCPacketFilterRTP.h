@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int _SSRC;
}

@property (readonly) unsigned char type;

- (id)initWithIncomingSSRC:(unsigned int)a0 acceptPacketType:(unsigned char)a1;
- (char)isMatchedPacket:(const void *)a0 size:(int)a1;
- (char)isPayloadTypeMatched:(char)a0;
- (char)isRTCPPayload:(unsigned short)a0;

@end
