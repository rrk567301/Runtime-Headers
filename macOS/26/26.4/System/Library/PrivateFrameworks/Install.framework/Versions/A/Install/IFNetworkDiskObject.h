@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (unsigned long long)totalSize;
- (unsigned long long)availableSpace;
- (id)mountPoint;
- (void)dealloc;
- (BOOL)isRootVolume;
- (unsigned long long)freeSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
