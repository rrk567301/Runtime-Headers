@interface IXFileManager : NSObject

+ (id)defaultManager;

- (char)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)removeItemAtURL:(id)a0 error:(id *)a1;
- (char)createSymbolicLinkAtURL:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (char)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(char)a1 mode:(unsigned short)a2 class:(int)a3 error:(id *)a4;
- (char)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(char)a1 mode:(unsigned short)a2 error:(id *)a3;
- (unsigned long long)diskUsageForURL:(id)a0;
- (char)itemDoesNotExistAtURL:(id)a0;
- (char)_copyItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(char)a2 error:(id *)a3;
- (unsigned long long)_diskUsageForDirectoryURL:(id)a0;
- (char)_moveItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(char)a2 error:(id *)a3;
- (id)_realPathForURL:(id)a0 allowNonExistentPathComponents:(char)a1;
- (id)_realPathWhatExistsInPath:(id)a0;
- (char)_removeACLAtPath:(const char *)a0 isDir:(char)a1 error:(id *)a2;
- (char)_traverseDirectory:(id)a0 ignoringFTSErrors:(char)a1 error:(id *)a2 withBlock:(id /* block */)a3;
- (char)_validateSymlink:(id)a0 withStartingDepth:(unsigned int)a1 andEndingDepth:(unsigned int *)a2;
- (char)copyACLFrom:(id)a0 toAllChildrenOfPath:(id)a1 error:(id *)a2;
- (char)copyACLFrom:(id)a0 toAllChildrenOfPath:(id)a1 ignoringCopyErrors:(char)a2 error:(id *)a3;
- (char)copyItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)createTemporaryDirectoryInDirectoryURL:(id)a0 error:(id *)a1;
- (id)createTemporaryExtractionDirectoryWithError:(id *)a0;
- (id)createTemporaryIconsDirectoryWithError:(id *)a0;
- (char)dataProtectionClassOfItemAtURL:(id)a0 class:(int *)a1 error:(id *)a2;
- (id)debugDescriptionOfItemAtURL:(id)a0;
- (id)destinationOfSymbolicLinkAtURL:(id)a0 error:(id *)a1;
- (char)itemExistsAtURL:(id)a0;
- (char)itemExistsAtURL:(id)a0 error:(id *)a1;
- (char)itemExistsAtURL:(id)a0 isDirectory:(char *)a1 error:(id *)a2;
- (char)moveItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)realPathForURL:(id)a0 ifChildOfURL:(id)a1;
- (char)removeItemAtURL:(id)a0 keepParent:(char)a1 error:(id *)a2;
- (char)setDataProtectionClassOfItemAtURL:(id)a0 toClass:(int)a1 ifPredicate:(id /* block */)a2 error:(id *)a3;
- (char)setPermissions:(unsigned short)a0 onAllChildrenOfPath:(id)a1 error:(id *)a2;
- (char)setPermissionsOfItemAtURL:(id)a0 toMode:(unsigned short)a1 error:(id *)a2;
- (id)urlsForItemsInDirectoryAtURL:(id)a0 ignoringSymlinks:(char)a1 error:(id *)a2;

@end
