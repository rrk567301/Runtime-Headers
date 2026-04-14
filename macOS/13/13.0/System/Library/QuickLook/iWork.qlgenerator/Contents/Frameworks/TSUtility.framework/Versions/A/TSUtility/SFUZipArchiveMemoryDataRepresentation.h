@class NSString, NSData;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData *mData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)data;
- (id)initWithData:(id)a0;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
