@class MPModelKind;

@interface MusicKit_SoftLinking_MPModelKind : NSObject {
    MPModelKind *_underlyingKind;
}

@property (readonly, nonatomic) MPModelKind *_underlyingKind;

+ (id)_modelKindForModelObjectType:(long long)a0;
+ (id)_defaultAlbumKind;
+ (id)_defaultAlbumKindForTracks;
+ (id)_defaultArtistKind;
+ (id)_defaultComposerKind;
+ (id)_defaultCuratorKind;
+ (id)_defaultFileAssetKind;
+ (id)_defaultRecentlyAddedObjectKind;
+ (id)_defaultGenreKind;
+ (id)_defaultMovieKind;
+ (id)_defaultPlaylistKind;
+ (id)_defaultPlaylistKindExcludingEmpty;
+ (id)_defaultPlaylistEntryKind;
+ (id)_defaultPlaylistEntryKindForTracks;
+ (id)_defaultPlaylistEntryKindForSongs;
+ (id)_defaultPlaylistEntryKindForMusicVideos;
+ (id)_defaultRadioStationKind;
+ (id)_defaultRecordLabelKind;
+ (id)_defaultSocialPersonKind;
+ (id)_defaultSongKind;
+ (id)_defaultSongKindForTracks;
+ (id)_defaultTVEpisodeKind;
+ (id)_defaultTVSeasonKind;
+ (id)_defaultTVShowKind;
+ (id)playlistEntryKindWithKinds:(id)a0;
+ (id)_songKindForVariants:(unsigned long long)a0;
+ (id)_songKindForVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (BOOL)shouldShowAllExtendedVideoContent;

- (void).cxx_destruct;
- (id)_initWithUnderlyingKind:(id)a0;

@end
