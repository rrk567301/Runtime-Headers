@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (void)dealloc;
- (unsigned long long)totalSize;
- (unsigned long long)availableSpace;
- (id)volumeName;
- (id)mountPoint;
- (id)diskIdentifier;
- (unsigned long long)freeSpace;
- (BOOL)isRootVolume;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
