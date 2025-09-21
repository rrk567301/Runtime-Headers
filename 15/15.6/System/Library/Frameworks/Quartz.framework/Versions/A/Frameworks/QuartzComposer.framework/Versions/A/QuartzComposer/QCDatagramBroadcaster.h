@interface QCDatagramBroadcaster : QCDatagramSocket

- (id)initWithAddress:(unsigned int)a0 port:(unsigned short)a1;
- (char)sendData:(id)a0;
- (char)sendString:(id)a0;

@end
