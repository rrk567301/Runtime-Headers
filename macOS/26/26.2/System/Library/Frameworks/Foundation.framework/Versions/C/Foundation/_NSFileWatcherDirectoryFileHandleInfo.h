@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (BOOL)isDirectory;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (id)description;

@end
