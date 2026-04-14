@class MPModelKind;

@interface MusicKit_SoftLinking_MPModelKind : NSObject {
    MPModelKind *_underlyingKind;
}

@property (readonly, nonatomic) MPModelKind *_underlyingKind;

+ (id)_modelKindForModelType:(long long)a0;
+ (id)_defaultAlbumKind;
+ (id)_defaultCuratorKind;
+ (id)_defaultArtistKind;
+ (id)_defaultFileAssetKind;
+ (id)_defaultRecentlyAddedObjectKind;
+ (id)_defaultGenreKind;
+ (id)_defaultMovieKind;
+ (id)_songKindForVariants:(unsigned long long)a0;
+ (id)_defaultPlaylistKind;
+ (id)_defaultPlaylistEntryKind;
+ (id)_defaultRecordLabelKind;
+ (id)_defaultRadioStationKind;
+ (id)_defaultTVEpisodeKind;
+ (id)_defaultSongKind;
+ (id)_defaultSongKindForTracks;
+ (BOOL)shouldShowAllExtendedVideoContent;
+ (id)_defaultPlaylistEntryKindForTracks;
+ (id)_defaultPlaylistEntryKindForSongs;
+ (id)_defaultPlaylistEntryKindForMusicVideos;
+ (id)playlistEntryKindWithKinds:(id)a0;
+ (id)_songKindForVariants:(unsigned long long)a0 options:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)_initWithUnderlyingKind:(id)a0;

@end
