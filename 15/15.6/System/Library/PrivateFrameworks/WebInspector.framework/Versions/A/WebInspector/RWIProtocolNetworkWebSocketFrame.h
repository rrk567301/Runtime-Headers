@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (nonatomic) double opcode;
@property (nonatomic) char mask;
@property (copy, nonatomic) NSString *payloadData;
@property (nonatomic) double payloadLength;

- (id)initWithOpcode:(double)a0 mask:(char)a1 payloadData:(id)a2 payloadLength:(double)a3;

@end
