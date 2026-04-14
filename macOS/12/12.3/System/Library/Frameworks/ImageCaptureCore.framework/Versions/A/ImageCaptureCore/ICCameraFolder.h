@class NSArray, NSMutableArray;

@interface ICCameraFolder : ICCameraItem

@property (retain) NSMutableArray *files;
@property (retain) NSMutableArray *folders;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } folderMediaLock;
@property (readonly, nonatomic) NSArray *contents;

- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)a0;
- (void)addFile:(id)a0;
- (BOOL)hasThumbnail;
- (void)addContent:(id)a0;
- (void)deleteFile:(id)a0;
- (void)addFiles:(id)a0;
- (void)addFolder:(id)a0;
- (void)removeContent;
- (id)initWithDictionary:(id)a0 parentFolder:(id)a1 device:(id)a2;
- (void)sendDidAddFolderItemMessageToDelegateOfCameraDevice:(id)a0;
- (void)sendDidRemoveFolderItemMessageToDelegateOfCameraDevice:(id)a0;
- (void)deleteItem:(id)a0;
- (id)getFolderWithID:(unsigned long long)a0;
- (id)getFileWithID:(unsigned long long)a0;
- (struct CGImage { } *)thumbnailIfAvailable;
- (id)metadataIfAvailable;
- (struct CGImage { } *)largeThumbnailIfAvailable;
- (void)deleteFolder:(id)a0;
- (void)deleteFolderWithID:(unsigned long long)a0;
- (void)deleteFileWithID:(unsigned long long)a0;

@end
