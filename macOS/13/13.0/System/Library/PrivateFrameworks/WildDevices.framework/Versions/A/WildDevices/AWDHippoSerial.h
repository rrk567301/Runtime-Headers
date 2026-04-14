@interface AWDHippoSerial : AWDSerial <AWDHippoTransportProtocol>

@property (copy, nonatomic) id /* block */ onRead;

+ (void)initialize;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)processReadBuffer;
- (id)initWithSerialPortPath:(id)a0 baudRate:(int)a1;

@end
