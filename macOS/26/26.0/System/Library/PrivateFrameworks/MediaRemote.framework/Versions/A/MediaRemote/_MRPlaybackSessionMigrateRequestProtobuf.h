@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf, NSMutableArray, _MRSendCommandResultStatusProtobuf;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char playbackPosition : 1; unsigned char playbackRate : 1; unsigned char destinationTypes : 1; unsigned char endpointOptions : 1; unsigned char originatorType : 1; unsigned char playbackState : 1; unsigned char playerOptions : 1; unsigned char recipeType : 1; unsigned char allowFadeTransition : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasPlayerOptions;
@property (nonatomic) int playerOptions;
@property (nonatomic) BOOL hasEndpointOptions;
@property (nonatomic) int endpointOptions;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) double playbackPosition;
@property (readonly, nonatomic) BOOL hasContentItem;
@property (retain, nonatomic) _MRContentItemProtobuf *contentItem;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) double playbackRate;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;
@property (nonatomic) BOOL hasAllowFadeTransition;
@property (nonatomic) BOOL allowFadeTransition;
@property (nonatomic) BOOL hasOriginatorType;
@property (nonatomic) unsigned int originatorType;
@property (nonatomic) BOOL hasDestinationTypes;
@property (nonatomic) unsigned int destinationTypes;
@property (readonly, nonatomic) BOOL hasInitiator;
@property (retain, nonatomic) NSString *initiator;
@property (readonly, nonatomic) BOOL hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (readonly, nonatomic) BOOL hasSetPlaybackSessionCommandStatus;
@property (retain, nonatomic) _MRSendCommandResultStatusProtobuf *setPlaybackSessionCommandStatus;
@property (nonatomic) BOOL hasRecipeType;
@property (nonatomic) int recipeType;

+ (Class)eventsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)playbackStateAsString:(int)a0;
- (int)StringAsPlaybackState:(id)a0;
- (void).cxx_destruct;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (int)StringAsEndpointOptions:(id)a0;
- (int)StringAsPlayerOptions:(id)a0;
- (int)StringAsRecipeType:(id)a0;
- (id)endpointOptionsAsString:(int)a0;
- (id)playerOptionsAsString:(int)a0;
- (id)recipeTypeAsString:(int)a0;

@end
