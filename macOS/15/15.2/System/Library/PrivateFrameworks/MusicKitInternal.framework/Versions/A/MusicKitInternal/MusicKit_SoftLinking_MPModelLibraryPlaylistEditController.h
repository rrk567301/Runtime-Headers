@class MusicKit_SoftLinking_MPSectionedCollection, NSString, MusicKit_SoftLinking_MPModelObject, MPModelLibraryPlaylistEditController, NSNumber;

@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditController : NSObject {
    MPModelLibraryPlaylistEditController *_underlyingEditController;
}

@property (class, readonly, nonatomic) NSString *playlistDidChangeNotificationName;

@property (readonly, nonatomic) id underlyingEditController;
@property (nonatomic) BOOL addInsertedTracksToLibrary;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *parentPlaylist;
@property (nonatomic) struct CGImage { } *userImage;
@property (retain, nonatomic) NSString *coverArtworkRecipe;
@property (retain, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (retain, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (retain, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (readonly, copy, nonatomic) MusicKit_SoftLinking_MPSectionedCollection *currentTrackList;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeEntry:(id)a0;
- (void)beginEditingWithCompletion:(id /* block */)a0;
- (void)commitWithCompletion:(id /* block */)a0;
- (void)moveEntry:(id)a0 afterEntry:(id)a1;
- (void)removeEntries:(id)a0;
- (void)setInitialTrackList:(id)a0;
- (void)_handlePlaylistDidChangeNotification:(id)a0;
- (void)appendModelObject:(id)a0 completion:(id /* block */)a1;
- (void)appendModelObjects:(id)a0 completion:(id /* block */)a1;
- (id)initWithPlaylist:(id)a0 initialTracklist:(id)a1 authorProfile:(id)a2 library:(id)a3;
- (id)initWithPlaylist:(id)a0 underlyingSectionedCollection:(id)a1 authorProfile:(id)a2 library:(id)a3;
- (void)insertModelObject:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;
- (void)insertModelObjects:(id)a0 afterEntry:(id)a1 completion:(id /* block */)a2;

@end
