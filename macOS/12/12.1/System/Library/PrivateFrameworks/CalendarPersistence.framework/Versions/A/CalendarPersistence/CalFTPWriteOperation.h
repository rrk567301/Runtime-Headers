@class NSData;

@interface CalFTPWriteOperation : CalFTPOperation

@property (retain, nonatomic) NSData *data;
@property (nonatomic) long long numberOfBytesWritten;
@property (nonatomic) struct __CFWriteStream { } *writeStream;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithURL:(id)a0 user:(id)a1 password:(id)a2 data:(id)a3;
- (id)initWithURL:(id)a0 user:(id)a1 password:(id)a2;
- (void)setProperties;
- (void)tearDownStream;
- (void)writeStream:(struct __CFWriteStream { } *)a0 receivedEventWithType:(unsigned long long)a1;

@end
