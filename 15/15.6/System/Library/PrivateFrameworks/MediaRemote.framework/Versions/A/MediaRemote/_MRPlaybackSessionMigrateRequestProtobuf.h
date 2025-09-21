@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf, NSMutableArray;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackPosition : 1; unsigned char playbackRate : 1; unsigned char destinationTypes : 1; unsigned char endpointOptions : 1; unsigned char originatorType : 1; unsigned char playbackState : 1; unsigned char playerOptions : 1; unsigned char allowFadeTransition : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) char hasPlayerOptions;
@property (nonatomic) int playerOptions;
@property (nonatomic) char hasEndpointOptions;
@property (nonatomic) int endpointOptions;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) char hasPlaybackPosition;
@property (nonatomic) double playbackPosition;
@property (readonly, nonatomic) char hasContentItem;
@property (retain, nonatomic) _MRContentItemProtobuf *contentItem;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) char hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) char hasPlaybackRate;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) char hasPlaybackSessionRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;
@property (nonatomic) char hasAllowFadeTransition;
@property (nonatomic) char allowFadeTransition;
@property (nonatomic) char hasOriginatorType;
@property (nonatomic) unsigned int originatorType;
@property (nonatomic) char hasDestinationTypes;
@property (nonatomic) unsigned int destinationTypes;
@property (readonly, nonatomic) char hasInitiator;
@property (retain, nonatomic) NSString *initiator;
@property (readonly, nonatomic) char hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;

+ (Class)eventsType;

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
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (int)StringAsPlaybackState:(id)a0;
- (int)StringAsEndpointOptions:(id)a0;
- (int)StringAsPlayerOptions:(id)a0;
- (id)endpointOptionsAsString:(int)a0;
- (id)playbackStateAsString:(int)a0;
- (id)playerOptionsAsString:(int)a0;

@end
