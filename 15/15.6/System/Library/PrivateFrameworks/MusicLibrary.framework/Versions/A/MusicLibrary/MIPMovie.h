@class MIPGenre, NSString, MIPArtist, NSData;

@interface MIPMovie : PBCodable <NSCopying> {
    struct { unsigned char rentalDuration : 1; unsigned char rentalPlaybackDuration : 1; unsigned char rentalPlaybackStartedDateTime : 1; unsigned char rentalStartedDateTime : 1; unsigned char audioLanguage : 1; unsigned char audioTrackId : 1; unsigned char audioTrackIndex : 1; unsigned char subtitleLanguage : 1; unsigned char subtitleTrackIndex : 1; unsigned char videoQuality : 1; unsigned char hasAlternateAudio : 1; unsigned char hasChapterData : 1; unsigned char hasSubtitles : 1; unsigned char rental : 1; } _has;
}

@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) char hasVideoQuality;
@property (nonatomic) int videoQuality;
@property (nonatomic) char hasRental;
@property (nonatomic) char rental;
@property (nonatomic) char hasHasChapterData;
@property (nonatomic) char hasChapterData;
@property (readonly, nonatomic) char hasExtendedContentName;
@property (retain, nonatomic) NSString *extendedContentName;
@property (readonly, nonatomic) char hasMovieInfo;
@property (retain, nonatomic) NSString *movieInfo;
@property (nonatomic) char hasHasAlternateAudio;
@property (nonatomic) char hasAlternateAudio;
@property (nonatomic) char hasHasSubtitles;
@property (nonatomic) char hasSubtitles;
@property (nonatomic) char hasAudioLanguage;
@property (nonatomic) int audioLanguage;
@property (nonatomic) char hasAudioTrackIndex;
@property (nonatomic) int audioTrackIndex;
@property (nonatomic) char hasAudioTrackId;
@property (nonatomic) int audioTrackId;
@property (nonatomic) char hasSubtitleLanguage;
@property (nonatomic) int subtitleLanguage;
@property (nonatomic) char hasSubtitleTrackIndex;
@property (nonatomic) int subtitleTrackIndex;
@property (nonatomic) char hasRentalDuration;
@property (nonatomic) long long rentalDuration;
@property (nonatomic) char hasRentalPlaybackDuration;
@property (nonatomic) long long rentalPlaybackDuration;
@property (nonatomic) char hasRentalPlaybackStartedDateTime;
@property (nonatomic) long long rentalPlaybackStartedDateTime;
@property (nonatomic) char hasRentalStartedDateTime;
@property (nonatomic) long long rentalStartedDateTime;
@property (readonly, nonatomic) char hasFlattenedChapterData;
@property (retain, nonatomic) NSData *flattenedChapterData;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) MIPGenre *genre;

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
