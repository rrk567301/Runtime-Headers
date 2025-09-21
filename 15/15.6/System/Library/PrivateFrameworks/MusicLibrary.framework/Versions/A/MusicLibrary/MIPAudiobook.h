@class MIPGenre, NSString, MIPPlaybackInfo, MIPArtist, MIPAlbum;

@interface MIPAudiobook : PBCodable <NSCopying> {
    struct { unsigned char audioFormat : 1; unsigned char discNumber : 1; unsigned char trackNumber : 1; unsigned char userRating : 1; unsigned char excludeFromShuffle : 1; unsigned char hasVideo : 1; } _has;
}

@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) char hasComposer;
@property (retain, nonatomic) MIPArtist *composer;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (nonatomic) char hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) char hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) char hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) char hasExcludeFromShuffle;
@property (nonatomic) char excludeFromShuffle;
@property (nonatomic) char hasAudioFormat;
@property (nonatomic) int audioFormat;
@property (nonatomic) char hasHasVideo;
@property (nonatomic) char hasVideo;
@property (readonly, nonatomic) char hasPlaybackInfo;
@property (retain, nonatomic) MIPPlaybackInfo *playbackInfo;
@property (readonly, nonatomic) char hasHlsPlaylistURL;
@property (retain, nonatomic) NSString *hlsPlaylistURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
