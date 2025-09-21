@class NSDictionary, NSArray;

@interface LPStaticMedia : NSObject

@property (class, readonly) unsigned int IOMainPort;
@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) BOOL hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)allMedia;
+ (id)mediaForPath:(id)a0;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)mediaForUUID:(id)a0;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (void)waitForBlockStorage;
+ (void)waitForIOMediaWithDevNode:(id)a0;

- (id)vendorName;
- (BOOL)isInternal;
- (BOOL)isReadOnly;
- (id)content;
- (id)deviceModel;
- (void)dealloc;
- (id)mountPoint;
- (id)description;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (id)BSDName;
- (BOOL)isJournaled;
- (id)mediaUUID;
- (BOOL)isWhole;
- (id)_deviceCharacteristicStringForKey:(id)a0;
- (id)devNodePath;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)getPropertyWithName:(id)a0;
- (id)getStringPropertyWithName:(id)a0;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (BOOL)isEmbeddedDeviceTypeRoot;
- (BOOL)isPrimaryMedia;
- (BOOL)setName:(id)a0 withError:(id *)a1;
- (int)storageMedium;
- (id)wholeMediaForMedia;

@end
