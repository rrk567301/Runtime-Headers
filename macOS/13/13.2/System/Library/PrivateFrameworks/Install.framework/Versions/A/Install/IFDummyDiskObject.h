@interface IFDummyDiskObject : NSObject

- (unsigned long long)totalSize;
- (unsigned long long)availableSpace;
- (id)volumeName;
- (id)mountPoint;
- (id)diskIdentifier;
- (unsigned long long)freeSpace;
- (BOOL)isRootVolume;
- (BOOL)filesystemIsLocked;

@end
