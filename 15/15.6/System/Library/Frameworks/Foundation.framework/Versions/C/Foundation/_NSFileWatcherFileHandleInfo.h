@interface _NSFileWatcherFileHandleInfo : NSObject {
    int fileHandle;
    char closed;
}

@property (readonly) char isDirectory;

+ (id)openFileWithPath:(id)a0;

- (void)dealloc;
- (id)description;
- (void)close;
- (char)verifyAccessByAuditToken:(struct { unsigned int x0[8]; })a0;

@end
