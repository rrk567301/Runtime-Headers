@class NSNumber;

@interface _AMSystemEventsDisk : _AMSystemEventsDiskItem

@property (readonly, copy) NSNumber *capacity;
@property (readonly) char ejectable;
@property (readonly) int format;
@property (readonly, copy) NSNumber *freeSpace;
@property char ignorePrivileges;
@property (readonly) char localVolume;
@property (readonly, copy) id server;
@property (readonly) char startup;

- (id)aliases;
- (id)files;
- (id)folders;
- (id)diskItems;
- (id)filePackages;

@end
