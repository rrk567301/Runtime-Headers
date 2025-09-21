@class NSString;

@interface TMSubdirectorySourceDisk : TMTestDisk

@property (copy) NSString *subdirectoryPath;
@property (copy) NSString *baseDevice;

- (BOOL)isAttached;
- (BOOL)detach;
- (id)description;
- (BOOL)attach;
- (void).cxx_destruct;
- (BOOL)unmount;
- (BOOL)isMounted;
- (BOOL)_mountFileSystem;
- (BOOL)constructFileSystem;
- (id)initWithPath:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2 error:(id *)a3;

@end
