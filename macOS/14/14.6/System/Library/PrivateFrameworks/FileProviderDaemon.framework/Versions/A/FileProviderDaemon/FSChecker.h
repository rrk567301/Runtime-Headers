@interface FSChecker : NSObject

@property BOOL itemIsInsideAPackage;
@property BOOL itemIsInsideAnIgnoredFolder;

- (void)enumerateItemsOnDiskAtURL:(id)a0 detachedRoots:(id)a1 usingFPFS:(BOOL)a2 packageDetection:(unsigned int)a3 delegate:(id)a4;
- (BOOL)isDataProtectedFileAtPath:(id)a0 handle:(struct fpfs_item_handle { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; char *x4; int x5; unsigned int x6; } *)a1;

@end
