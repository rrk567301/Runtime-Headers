@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (void)dealloc;
- (id)mountPoint;
- (unsigned long long)availableSpace;
- (BOOL)isRootVolume;
- (unsigned long long)totalSize;
- (unsigned long long)freeSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
