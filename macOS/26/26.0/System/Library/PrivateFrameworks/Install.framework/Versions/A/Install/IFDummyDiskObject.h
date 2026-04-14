@interface IFDummyDiskObject : NSObject

- (id)mountPoint;
- (unsigned long long)availableSpace;
- (BOOL)isRootVolume;
- (unsigned long long)totalSize;
- (unsigned long long)freeSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;

@end
