@class NSString, NSData;

@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char elapsedTime : 1; unsigned char radioStationIdentifier : 1; unsigned char timestamp : 1; unsigned char uniqueIdentifier : 1; unsigned char playbackRate : 1; unsigned char repeatMode : 1; unsigned char shuffleMode : 1; unsigned char isAdvertisement : 1; unsigned char isAlwaysLive : 1; unsigned char isExplicitTrack : 1; unsigned char isInTransition : 1; unsigned char isMusicApp : 1; } _has;
}

@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasElapsedTime;
@property (nonatomic) double elapsedTime;
@property (nonatomic) char hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) char hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) char hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char hasUniqueIdentifier;
@property (nonatomic) unsigned long long uniqueIdentifier;
@property (nonatomic) char hasIsExplicitTrack;
@property (nonatomic) char isExplicitTrack;
@property (nonatomic) char hasIsMusicApp;
@property (nonatomic) char isMusicApp;
@property (nonatomic) char hasRadioStationIdentifier;
@property (nonatomic) long long radioStationIdentifier;
@property (readonly, nonatomic) char hasRadioStationHash;
@property (retain, nonatomic) NSString *radioStationHash;
@property (readonly, nonatomic) char hasRadioStationName;
@property (retain, nonatomic) NSString *radioStationName;
@property (readonly, nonatomic) char hasArtworkDataDigest;
@property (retain, nonatomic) NSData *artworkDataDigest;
@property (nonatomic) char hasIsAlwaysLive;
@property (nonatomic) char isAlwaysLive;
@property (nonatomic) char hasIsAdvertisement;
@property (nonatomic) char isAdvertisement;
@property (nonatomic) char hasIsInTransition;
@property (nonatomic) char isInTransition;

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
- (int)StringAsShuffleMode:(id)a0;
- (int)StringAsRepeatMode:(id)a0;
- (id)repeatModeAsString:(int)a0;
- (id)shuffleModeAsString:(int)a0;

@end
