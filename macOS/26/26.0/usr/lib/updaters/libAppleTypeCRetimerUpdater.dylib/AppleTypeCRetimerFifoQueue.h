@class NSData;

@interface AppleTypeCRetimerFifoQueue : NSObject {
    NSData *_buffer;
}

@property (readonly) unsigned long long length;

- (id)description;
- (void)enqueueData:(id)a0;
- (void).cxx_destruct;
- (id)dequeueDataOfLength:(unsigned long long)a0;

@end
