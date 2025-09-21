@class NSArray, NSDictionary, NSSet, NSURL, NSData;

@interface AMPPhotoSyncPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *photoSharingSettings;
@property (nonatomic) char syncPhotos;
@property (nonatomic) int photoSyncSource;
@property (nonatomic) int photoSyncMode;
@property (nonatomic) char copyOriginalPhotos;
@property (nonatomic) int photoEventCount;
@property (nonatomic) char autoIncludePhotosEnabled;
@property (nonatomic) char onlyFavoritePhotos;
@property (nonatomic) char photoSyncAllAlbums;
@property (nonatomic) char photoSyncAllFaces;
@property (nonatomic) char photoSyncPhotoVideos;
@property (nonatomic) int photosAppSyncMode;
@property (nonatomic) int photosAppEventCount;
@property (nonatomic) char photosAppCopyOriginalPhotos;
@property (nonatomic) char photosAppSyncPhotoVideos;
@property (nonatomic) char photosAppSyncAllAlbums;
@property (nonatomic) char photosAppSyncAllFaces;
@property (nonatomic) char photosAppAutoIncludeEnabled;
@property (nonatomic) char photosAppOnlyFavorites;
@property (nonatomic) int photosAppCustomAlbumOrder;
@property (retain, nonatomic) NSArray *photosAppAlbums;
@property (retain, nonatomic) NSSet *photosAppSelectedAlbums;
@property (nonatomic) int photosFolderSyncMode;
@property (nonatomic) char photosFolderCopyOriginalPhotos;
@property (nonatomic) char photosFolderSyncPhotoVideos;
@property (nonatomic) int photosFolderCustomAlbumOrder;
@property (retain, nonatomic) NSURL *photosFolderURL;
@property (retain, nonatomic) NSData *photosFolderBookmark;
@property (retain, nonatomic) NSArray *photosFolderNames;
@property (retain, nonatomic) NSSet *photosFolderSelectedNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoSharingSettings:(id)a0;

@end
