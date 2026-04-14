@interface B2PIdentificationCommand : B2PCommand

@property (readonly) int infoID;

- (id)data;
- (id)description;
- (id)init;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;

@end
