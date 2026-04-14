@interface IFDummyDiskObject : NSObject

- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (id)mountPoint;
- (BOOL)isRootVolume;
- (unsigned long long)freeSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;

@end
