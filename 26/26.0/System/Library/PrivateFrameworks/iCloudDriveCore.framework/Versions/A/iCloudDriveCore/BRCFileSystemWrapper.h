@interface BRCFileSystemWrapper : NSObject

+ (int)cloneFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (int)openFileWithDirFd:(int)a0 filename:(const char *)a1 flags:(int)a2 error:(id *)a3;
+ (int)recursiveRemove:(id)a0;
+ (int)removeFolderInAutoreleasepoolAtPath:(id)a0 excludingSelf:(BOOL)a1 allowLongPaths:(BOOL)a2 callback:(id /* block */)a3;

@end
