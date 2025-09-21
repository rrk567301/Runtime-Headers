@class _MRPlaybackQueueCapabilitiesProtobuf, NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRSupportedCommandsProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackStateTimestamp : 1; unsigned char playbackState : 1; } _has;
}

@property (readonly, nonatomic) char hasNowPlayingInfo;
@property (retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property (readonly, nonatomic) char hasSupportedCommands;
@property (retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands;
@property (readonly, nonatomic) char hasPlaybackQueue;
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (readonly, nonatomic) char hasDisplayID;
@property (retain, nonatomic) NSString *displayID;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) char hasPlaybackState;
@property (nonatomic) int playbackState;
@property (readonly, nonatomic) char hasPlaybackQueueCapabilities;
@property (retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic) char hasPlaybackStateTimestamp;
@property (nonatomic) double playbackStateTimestamp;

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
- (id)playbackStateAsString:(int)a0;

@end
