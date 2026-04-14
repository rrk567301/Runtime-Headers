@class NSString, OISFUFileDataRepresentation;

@interface OISFUZipArchiveFileDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    OISFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)dataLength;
- (id)initWithPath:(id)a0;
- (BOOL)isEncrypted;
- (id)path;
- (id)inputStream;
- (void)dealloc;
- (BOOL)isReadable;
- (id)bufferedInputStreamWithOffset:(long long)a0 length:(long long)a1;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)inputStreamWithOffset:(long long)a0 length:(long long)a1;

@end
