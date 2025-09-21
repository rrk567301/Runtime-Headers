@class NSData;

@interface GCDAsyncWritePacket : NSObject {
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
    char countBytesWritten;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0 timeout:(double)a1 tag:(long long)a2 countBytesWritten:(char)a3;

@end
