@interface IFDummyDiskObject : NSObject

- (unsigned long long)availableSpace;
- (unsigned long long)totalSize;
- (BOOL)isRootVolume;
- (unsigned long long)freeSpace;
- (id)mountPoint;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;

@end
