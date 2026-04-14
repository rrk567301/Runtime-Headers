@class NSData, NSString, NSLock;

@interface ISS_DMFileData : NSData {
    NSData *_embeddedData;
    NSString *_localPath;
    NSLock *_dataLock;
    long long _lengthFromFileSystem;
    int _fileHandle;
}

+ (id)dataWithLocalFile:(id)a0;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithLocalFile:(id)a0;
- (id)_embeddedData;
- (BOOL)_initFileData;
- (long long)_lengthFromFileSystem;
- (BOOL)_initLengthFromFileSystem;

@end
