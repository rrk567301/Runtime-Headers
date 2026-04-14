@class NSData;

@interface AppleTypeCRetimerFifoQueue : NSObject {
    NSData *_buffer;
}

@property (readonly) unsigned long long length;

- (void).cxx_destruct;
- (id)description;
- (void)enqueueData:(id)a0;
- (id)dequeueDataOfLength:(unsigned long long)a0;

@end
