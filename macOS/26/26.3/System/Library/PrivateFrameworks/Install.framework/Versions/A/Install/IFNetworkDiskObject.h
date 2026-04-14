@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (BOOL)isRootVolume;
- (unsigned long long)freeSpace;
- (void)dealloc;
- (id)mountPoint;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
