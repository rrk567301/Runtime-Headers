@class NSString;

@interface TVRMSNowPlayingInfoMessage : PBCodable <NSCopying> {
    struct { unsigned char databaseID : 1; unsigned char itemID : 1; unsigned char timeRemaining : 1; unsigned char timestamp : 1; unsigned char totalDuration : 1; unsigned char likedState : 1; unsigned char mediaKind : 1; unsigned char playbackState : 1; unsigned char revisionNumber : 1; unsigned char scrubbableState : 1; unsigned char canSkipNext : 1; unsigned char canSkipPrevious : 1; unsigned char canWishlist : 1; unsigned char hasChapterData : 1; unsigned char likeable : 1; } _has;
}

@property (nonatomic) char hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) char hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (readonly, nonatomic) char hasTrackName;
@property (retain, nonatomic) NSString *trackName;
@property (readonly, nonatomic) char hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (readonly, nonatomic) char hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasTimeRemaining;
@property (nonatomic) double timeRemaining;
@property (nonatomic) char hasTotalDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) char hasRevisionNumber;
@property (nonatomic) unsigned int revisionNumber;
@property (nonatomic) char hasMediaKind;
@property (nonatomic) int mediaKind;
@property (nonatomic) char hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) char hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) char hasScrubbableState;
@property (nonatomic) int scrubbableState;
@property (nonatomic) char hasCanSkipNext;
@property (nonatomic) char canSkipNext;
@property (nonatomic) char hasCanSkipPrevious;
@property (nonatomic) char canSkipPrevious;
@property (nonatomic) char hasLikeable;
@property (nonatomic) char likeable;
@property (nonatomic) char hasCanWishlist;
@property (nonatomic) char canWishlist;
@property (nonatomic) char hasHasChapterData;
@property (nonatomic) char hasChapterData;

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
