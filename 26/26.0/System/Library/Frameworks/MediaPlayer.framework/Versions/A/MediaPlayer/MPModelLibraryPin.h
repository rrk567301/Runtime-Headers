@class MPModelSong, NSString, MPModelAlbum, MPModelPlaylist, MPModelArtist, MPModelObject;

@interface MPModelLibraryPin : MPModelObject

@property (retain, nonatomic) MPModelObject *pinnedEntity;
@property (nonatomic) long long position;
@property (nonatomic) long long defaultAction;
@property (copy, nonatomic) NSString *positionUUID;
@property (nonatomic) long long pinnedEntityType;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelSong *song;
@property (nonatomic) long long pinnedEntityPersistentID;
@property (readonly, nonatomic) long long persistentID;

+ (void)__MPModelPropertyLibraryPinDefaultAction__MAPPING_MISSING__;
+ (void)__MPModelPropertyLibraryPinEntityPersistentID__MAPPING_MISSING__;
+ (void)__MPModelPropertyLibraryPinEntityType__MAPPING_MISSING__;
+ (void)__MPModelPropertyLibraryPinPersistentID__MAPPING_MISSING__;
+ (void)__MPModelPropertyLibraryPinPositionUUID__MAPPING_MISSING__;
+ (void)__MPModelPropertyLibraryPinPosition__MAPPING_MISSING__;
+ (void)__MPModelRelationshipLibraryPinAlbum__MAPPING_MISSING__;
+ (void)__MPModelRelationshipLibraryPinArtist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipLibraryPinPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipLibraryPinSong__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__defaultAction_KEY;
+ (id)__persistentID_KEY;
+ (id)__pinnedEntityPersistentID_KEY;
+ (id)__pinnedEntityType_KEY;
+ (id)__playlist_KEY;
+ (id)__positionUUID_KEY;
+ (id)__position_KEY;
+ (id)__song_KEY;

- (id)anyObject;
- (id)humanDescription;
- (void).cxx_destruct;

@end
