@class ICCameraFolder, ICCameraDevice, NSString, NSMutableDictionary, NSDate, NSDictionary;

@interface ICCameraItem : NSObject

@property (nonatomic) unsigned long long privMetadataState;
@property (nonatomic) unsigned long long privThumbnailState;
@property (nonatomic) ICCameraDevice *device;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) NSString *UTI;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=isInTemporaryStore) BOOL inTemporaryStore;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (nonatomic) unsigned int ptpObjectHandle;
@property (nonatomic, getter=wasAddedAfterContentCatalogCompleted) BOOL addedAfterContentCatalogCompleted;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isRaw) BOOL raw;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long ownerID;
@property (readonly) unsigned long long twinID;
@property (readonly) unsigned long long objectID;
@property (readonly) BOOL hasThumbnail;
@property (readonly) BOOL hasMetadata;
@property (retain) id userObject;
@property (retain, nonatomic) ICCameraFolder *parentFolder;
@property (readonly) NSString *relativeFileSystemPath;
@property (readonly) unsigned long long metadataState;
@property (readonly) unsigned long long thumbnailState;
@property (readonly, nonatomic) NSString *fileSystemPath;
@property (readonly, nonatomic) struct CGImage { } *thumbnail;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly) struct CGImage { } *thumbnailIfAvailable;
@property (readonly) struct CGImage { } *largeThumbnailIfAvailable;
@property (readonly) NSDictionary *metadataIfAvailable;

- (void)dealloc;
- (id)description;
- (unsigned long long)unsignedIntegerValue;
- (id)valueForUndefinedKey:(id)a0;
- (void)setObjectID:(unsigned long long)a0;
- (void)setParentID:(unsigned long long)a0;
- (void)setOwnerID:(unsigned long long)a0;
- (void)setThumbnailState:(unsigned long long)a0;
- (void)setMetadataState:(unsigned long long)a0;
- (void)flushMetadataCache;
- (id)initWithDictionary:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (void)setTwinID:(unsigned long long)a0;
- (void)removeParentAssignment;
- (void)removeDeviceAssignment;
- (long long)compareCameraItem:(id)a0;
- (void)flushThumbnailCache;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)appendPath:(id)a0 andMountPoint:(BOOL)a1;

@end
