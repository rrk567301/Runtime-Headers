@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (id)mountPoint;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)isRootVolume;
- (unsigned long long)availableSpace;
- (void)dealloc;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
