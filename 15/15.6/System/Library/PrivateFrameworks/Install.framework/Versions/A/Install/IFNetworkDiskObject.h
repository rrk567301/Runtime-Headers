@class NSString;

@interface IFNetworkDiskObject : NSObject {
    NSString *_mountPath;
}

- (void)dealloc;
- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (id)volumeName;
- (id)mountPoint;
- (unsigned long long)freeSpace;
- (id)diskIdentifier;
- (char)isRootVolume;
- (char)filesystemIsLocked;
- (id)initWithMountPath:(id)a0;

@end
