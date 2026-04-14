@class NSString;

@interface PXSharedAlbumsActivityEntryAlbumInformation : NSObject

@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, copy, nonatomic) NSString *albumGUID;
@property (readonly, nonatomic) BOOL ownerIsAllowlisted;

- (void).cxx_destruct;
- (id)initWithAlbumGUID:(id)a0 photoLibrary:(id)a1 plPhotoLibrary:(id)a2;
- (id)initWithAlbumTitle:(id)a0 albumGUID:(id)a1 ownerIsAllowlisted:(BOOL)a2;

@end
