@class NSDictionary, NSArray;

@interface LPMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) BOOL hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)mediaForPath:(id)a0;
+ (id)allMedia;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (id)mediaForUUID:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)name;
- (id)content;
- (BOOL)isInternal;
- (id)BSDName;
- (id)mountPoint;
- (id)mediaUUID;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (id)getStringPropertyWithName:(id)a0;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)devNodePath;
- (BOOL)isWhole;
- (BOOL)isEmbeddedDeviceTypeRoot;
- (id)wholeMediaForMedia;
- (BOOL)setName:(id)a0 withError:(id *)a1;
- (BOOL)isPrimaryMedia;
- (id)getPropertyWithName:(id)a0;

@end
