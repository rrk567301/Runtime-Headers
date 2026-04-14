@class NSArray, MusicKit_SoftLinking_MPModelObject, MPModelLibraryAddToPlaylistChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject

@property (readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (copy, nonatomic) NSArray *modelObjects;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *playlist;

- (void).cxx_destruct;
- (id)initWithPlaylist:(id)a0 itemToAdd:(id)a1 representativeObject:(id)a2 referralObject:(id)a3;
- (id)_initWithPlaylist:(id)a0 itemsToAdd:(id)a1 representativeObject:(id)a2 referralObject:(id)a3;
- (id)initWithPlaylist:(id)a0 songIdentifiers:(id)a1 representativeObject:(id)a2 referralObject:(id)a3;

@end
