@class NSDictionary, NSArray;

@interface LPMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) BOOL hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)mediaForPath:(id)a0;
+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)allMedia;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (id)mediaForUUID:(id)a0;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (void)waitForIOMediaWithDevNode:(id)a0;
+ (void)waitForBlockStorage;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)content;
- (BOOL)isInternal;
- (id)BSDName;
- (id)mountPoint;
- (id)mediaUUID;
- (id)wholeMediaForMedia;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (BOOL)setName:(id)a0 withError:(id *)a1;
- (id)devNodePath;
- (BOOL)isWhole;
- (BOOL)isEmbeddedDeviceTypeRoot;
- (BOOL)isPrimaryMedia;
- (id)getPropertyWithName:(id)a0;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)getStringPropertyWithName:(id)a0;

@end
