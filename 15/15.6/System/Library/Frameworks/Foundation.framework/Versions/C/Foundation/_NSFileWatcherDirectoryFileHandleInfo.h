@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)close;
- (char)isDirectory;

@end
