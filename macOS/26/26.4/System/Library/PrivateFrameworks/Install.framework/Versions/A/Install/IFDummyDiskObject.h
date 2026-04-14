@interface IFDummyDiskObject : NSObject

- (unsigned long long)totalSize;
- (unsigned long long)availableSpace;
- (id)mountPoint;
- (BOOL)isRootVolume;
- (unsigned long long)freeSpace;
- (id)volumeName;
- (id)diskIdentifier;
- (BOOL)filesystemIsLocked;

@end
