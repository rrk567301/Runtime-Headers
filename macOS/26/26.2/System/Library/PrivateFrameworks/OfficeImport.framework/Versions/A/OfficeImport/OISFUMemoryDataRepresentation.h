@class NSData;

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}

- (long long)dataLength;
- (id)initWithDataRepresentation:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)isReadable;
- (id)inputStream;
- (id)data;
- (void)dealloc;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
