@interface CHDBaseDevice : AWDHippoLink

- (id)initCommon;
- (void)handleNewChannel:(id)a0;
- (id)initWithSerialDevPath:(id)a0 baudRate:(int)a1 type:(int)a2;

@end
