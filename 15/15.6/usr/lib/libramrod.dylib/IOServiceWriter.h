@interface IOServiceWriter : NSObject

@property unsigned int service;
@property unsigned int serviceConnect;
@property char isErase;
@property char shouldCommit;

- (void)dealloc;
- (char)finished;
- (char)isAvailable;
- (id)initWithService:(unsigned int)a0;
- (int)eraseBytes:(unsigned int)a0 ofLength:(unsigned int)a1 withError:(id *)a2;
- (int)openService;
- (id)readDataAtOffset:(unsigned int)a0 ofLength:(unsigned int)a1;
- (int)readDataAtOffset:(unsigned int)a0 ofLength:(unsigned int)a1 intoBuffer:(void *)a2;
- (int)writeBytes:(char *)a0 ofLength:(unsigned long long)a1 withError:(id *)a2;
- (int)writeData:(id)a0 withError:(id *)a1;

@end
