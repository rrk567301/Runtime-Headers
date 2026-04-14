@interface B2PPingCommand : B2PCommand {
    unsigned char _protocolVersion;
}

- (id)init;
- (id)description;
- (id)data;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;

@end
