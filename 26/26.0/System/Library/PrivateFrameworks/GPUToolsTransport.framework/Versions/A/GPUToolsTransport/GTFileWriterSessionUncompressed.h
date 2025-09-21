@class NSString, NSArray, NSURL;

@interface GTFileWriterSessionUncompressed : NSObject <GTFileWriterSession> {
    NSArray *_fileEntries;
    NSURL *_baseURL;
    unsigned long long _currentFileIndex;
    unsigned long long _currentFileBytesWritten;
    int _fd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithFileEntries:(id)a0 relativeToURL:(id)a1 options:(id)a2 error:(id *)a3;

- (BOOL)finish:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_closeCurrentFileDescriptor:(id *)a0;
- (int)_getCurrentFileDescriptor:(id *)a0;
- (int)_openNextFile:(id *)a0;
- (BOOL)_writeUncompressedFileData:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)initWithFileEntries:(id)a0 relativeToURL:(id)a1 options:(id)a2 error:(id *)a3;
- (void)writeFileData:(id)a0 completionHandler:(id /* block */)a1;

@end
