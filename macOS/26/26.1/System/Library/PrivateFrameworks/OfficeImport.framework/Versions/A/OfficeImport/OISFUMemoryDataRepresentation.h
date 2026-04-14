@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (id)initWithData:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)data;
- (void)dealloc;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
