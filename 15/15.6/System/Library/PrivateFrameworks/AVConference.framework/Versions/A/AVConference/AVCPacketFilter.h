@interface AVCPacketFilter : NSObject

@property (readonly) char isRTPFilter;

- (char)isMatchedPacket:(const void *)a0 size:(int)a1;

@end
