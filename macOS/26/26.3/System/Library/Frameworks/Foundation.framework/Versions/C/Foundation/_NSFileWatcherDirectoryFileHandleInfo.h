@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (void)close;
- (id)description;
- (BOOL)isDirectory;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
