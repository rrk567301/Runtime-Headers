@class NSString;

@interface TMSubdirectorySourceDisk : TMTestDisk

@property (copy) NSString *subdirectoryPath;
@property (copy) NSString *baseDevice;

- (id)description;
- (void).cxx_destruct;
- (BOOL)detach;
- (BOOL)isAttached;
- (BOOL)isMounted;
- (BOOL)unmount;
- (BOOL)attach;
- (BOOL)constructFileSystem;
- (BOOL)_mountFileSystem;
- (id)initWithPath:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2 error:(id *)a3;

@end
