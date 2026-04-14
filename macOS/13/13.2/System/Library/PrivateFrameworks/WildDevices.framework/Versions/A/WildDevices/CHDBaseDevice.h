@interface CHDBaseDevice : AWDHippoLink

- (id)initCommon;
- (id)initWithSerialDevPath:(id)a0 baudRate:(int)a1 type:(int)a2;
- (void)handleNewChannel:(id)a0;

@end
