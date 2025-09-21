@class NSString;

@interface TMSubdirectorySourceDisk : TMTestDisk

@property (copy) NSString *subdirectoryPath;
@property (copy) NSString *baseDevice;

- (id)description;
- (void).cxx_destruct;
- (char)detach;
- (char)isAttached;
- (char)unmount;
- (char)isMounted;
- (char)_mountFileSystem;
- (char)attach;
- (char)constructFileSystem;
- (id)initWithPath:(id)a0 capacity:(unsigned long long)a1 arbiter:(id)a2 error:(id *)a3;

@end
