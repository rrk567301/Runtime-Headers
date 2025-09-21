@class NSString, NSMutableArray;

@interface BMPBNowPlayingEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char duration : 1; unsigned char elapsed : 1; unsigned char itemMediaSubtype : 1; unsigned char itemMediaType : 1; unsigned char playbackState : 1; unsigned char isAirPlayVideo : 1; unsigned char isRemoteControl : 1; } _has;
}

@property (readonly, nonatomic) char hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) char hasPlaybackState;
@property (nonatomic) int playbackState;
@property (readonly, nonatomic) char hasAlbum;
@property (retain, nonatomic) NSString *album;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (readonly, nonatomic) char hasGenre;
@property (retain, nonatomic) NSString *genre;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char hasElapsed;
@property (nonatomic) unsigned int elapsed;
@property (readonly, nonatomic) char hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) char hasITunesStoreIdentifier;
@property (retain, nonatomic) NSString *iTunesStoreIdentifier;
@property (readonly, nonatomic) char hasITunesSubscriptionIdentifier;
@property (retain, nonatomic) NSString *iTunesSubscriptionIdentifier;
@property (nonatomic) char hasIsAirPlayVideo;
@property (nonatomic) char isAirPlayVideo;
@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasITunesArtistIdentifier;
@property (retain, nonatomic) NSString *iTunesArtistIdentifier;
@property (readonly, nonatomic) char hasITunesAlbumIdentifier;
@property (retain, nonatomic) NSString *iTunesAlbumIdentifier;
@property (readonly, nonatomic) char hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) char hasIsRemoteControl;
@property (nonatomic) char isRemoteControl;
@property (nonatomic) char hasItemMediaType;
@property (nonatomic) int itemMediaType;
@property (nonatomic) char hasItemMediaSubtype;
@property (nonatomic) int itemMediaSubtype;

+ (Class)outputDevicesType;

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
- (int)StringAsPlaybackState:(id)a0;
- (void)addOutputDevices:(id)a0;
- (void)clearOutputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)a0;
- (unsigned long long)outputDevicesCount;
- (id)playbackStateAsString:(int)a0;
- (int)StringAsItemMediaSubtype:(id)a0;
- (int)StringAsItemMediaType:(id)a0;
- (id)itemMediaSubtypeAsString:(int)a0;
- (id)itemMediaTypeAsString:(int)a0;

@end
