@class NSArray, NSMutableArray, NSString;

@interface ICCameraFolder : ICCameraItem <ICMediaItemProtocol>

@property (retain) NSMutableArray *files;
@property (retain) NSMutableArray *folders;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } folderMediaLock;
@property (readonly, nonatomic) NSArray *contents;
@property (readonly, nonatomic) unsigned long long unsignedIntegerValue;
@property (readonly, copy, nonatomic) NSString *mediaItemType;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)addFile:(id)a0;
- (char)hasThumbnail;
- (void)deleteFile:(id)a0;
- (void)addFolder:(id)a0;
- (void)deleteFileWithID:(unsigned long long)a0;
- (void)deleteFolder:(id)a0;
- (void)deleteFolderWithID:(unsigned long long)a0;
- (void)deleteItem:(id)a0;
- (id)getFileWithID:(unsigned long long)a0;
- (id)getFolderWithID:(unsigned long long)a0;
- (id)initWithName:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (struct CGImage { } *)largeThumbnailIfAvailable;
- (id)metadataIfAvailable;
- (struct CGImage { } *)thumbnailIfAvailable;

@end
