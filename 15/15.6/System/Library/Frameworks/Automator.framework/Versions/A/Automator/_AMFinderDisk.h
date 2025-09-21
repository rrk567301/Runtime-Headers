@interface _AMFinderDisk : _AMFinderContainer

@property (readonly) long long capacity;
@property (readonly) long long freeSpace;
@property (readonly) char ejectable;
@property (readonly) char localVolume;
@property (readonly) char startup;
@property (readonly) int format;
@property (readonly) char journalingEnabled;
@property char ignorePrivileges;

- (id)items;
- (id)packages;
- (id)containers;
- (id)files;
- (long long)id;
- (id)folders;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (id)internetLocationFiles;

@end
