@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)path;
- (id)initWithPath:(id)a0;
- (char)isEncrypted;
- (id)inputStream;
- (long long)dataLength;
- (char)isReadable;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (char)hasSameLocationAs:(id)a0;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
