@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (BOOL)isDirectory;
- (unsigned long long)hash;
- (void)close;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
