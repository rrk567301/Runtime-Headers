@class NSMutableArray;

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char artworkUpdates : 1; unsigned char keyboardUpdates : 1; unsigned char nowPlayingUpdates : 1; unsigned char outputDeviceUpdates : 1; unsigned char systemEndpointUpdates : 1; unsigned char volumeUpdates : 1; } _has;
}

@property (nonatomic) char hasNowPlayingUpdates;
@property (nonatomic) char nowPlayingUpdates;
@property (nonatomic) char hasArtworkUpdates;
@property (nonatomic) char artworkUpdates;
@property (nonatomic) char hasVolumeUpdates;
@property (nonatomic) char volumeUpdates;
@property (nonatomic) char hasKeyboardUpdates;
@property (nonatomic) char keyboardUpdates;
@property (nonatomic) char hasOutputDeviceUpdates;
@property (nonatomic) char outputDeviceUpdates;
@property (nonatomic) char hasSystemEndpointUpdates;
@property (nonatomic) char systemEndpointUpdates;
@property (retain, nonatomic) NSMutableArray *subscribedPlayerPaths;

+ (Class)subscribedPlayerPathsType;

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
- (void)addSubscribedPlayerPaths:(id)a0;
- (void)clearSubscribedPlayerPaths;
- (id)subscribedPlayerPathsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedPlayerPathsCount;

@end
