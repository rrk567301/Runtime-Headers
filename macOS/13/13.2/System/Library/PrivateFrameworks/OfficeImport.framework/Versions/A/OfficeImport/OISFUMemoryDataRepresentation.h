@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (void)dealloc;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
