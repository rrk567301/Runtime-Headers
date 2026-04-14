@interface _NSFileWatcherFileHandleInfo : NSObject {
    int fileHandle;
    BOOL closed;
}

@property (readonly) BOOL isDirectory;

+ (id)openFileWithPath:(id)a0;

- (BOOL)verifyAccessByAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)description;
- (void)close;
- (void)dealloc;

@end
