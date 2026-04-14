@interface IFDummyDiskObject : NSObject

- (id)mountPoint;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (BOOL)isRootVolume;
- (unsigned long long)availableSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;

@end
