@class AWDHippoLink;

@interface AWDHippoChannel : NSObject

@property (readonly) unsigned short port;
@property (weak) AWDHippoLink *link;

+ (void)initialize;

- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (void)terminate;
- (void)processData:(id)a0;
- (id)initWithLink:(id)a0 withPort:(unsigned short)a1;
- (void)writeBytes:(const void *)a0 withLength:(unsigned long long)a1;
- (void)processReceiveData:(id)a0;

@end
