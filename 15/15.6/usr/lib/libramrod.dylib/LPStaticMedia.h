@class NSDictionary, NSArray;

@interface LPStaticMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) char hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)allMedia;
+ (id)mediaForPath:(id)a0;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)mediaForPath:(id)a0 isSnapshot:(char *)a1;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)mediaForUUID:(id)a0;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (void)waitForBlockStorage;
+ (void)waitForIOMediaWithDevNode:(id)a0;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (id)name;
- (id)vendorName;
- (id)content;
- (char)isReadOnly;
- (id)deviceModel;
- (char)isInternal;
- (id)BSDName;
- (id)mountPoint;
- (char)isJournaled;
- (id)mediaUUID;
- (char)isWhole;
- (id)_deviceCharacteristicStringForKey:(id)a0;
- (id)devNodePath;
- (char)getBoolPropertyWithName:(id)a0;
- (id)getPropertyWithName:(id)a0;
- (id)getStringPropertyWithName:(id)a0;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (char)isEmbeddedDeviceTypeRoot;
- (char)isPrimaryMedia;
- (char)setName:(id)a0 withError:(id *)a1;
- (int)storageMedium;
- (id)wholeMediaForMedia;

@end
