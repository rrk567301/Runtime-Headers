@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData *mData;
}

- (long long)dataLength;
- (id)initWithData:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)data;
- (id)inputStream;
- (void)dealloc;
- (BOOL)isReadable;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
