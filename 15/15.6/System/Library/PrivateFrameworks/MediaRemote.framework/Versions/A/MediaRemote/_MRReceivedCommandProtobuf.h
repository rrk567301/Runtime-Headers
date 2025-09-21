@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRCommandOptionsProtobuf, _MRReceivedCommandAppOptionsProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying> {
    struct { unsigned char destinationAppProcessID : 1; unsigned char command : 1; unsigned char originUID : 1; } _has;
}

@property (nonatomic) char hasCommand;
@property (nonatomic) int command;
@property (readonly, nonatomic) char hasOptions;
@property (retain, nonatomic) _MRCommandOptionsProtobuf *options;
@property (nonatomic) char hasOriginUID;
@property (nonatomic) int originUID;
@property (readonly, nonatomic) char hasSenderAppDisplayID;
@property (retain, nonatomic) NSString *senderAppDisplayID;
@property (readonly, nonatomic) char hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) char hasDestinationAppProcessID;
@property (nonatomic) long long destinationAppProcessID;
@property (readonly, nonatomic) char hasRemoteControlInterfaceID;
@property (retain, nonatomic) NSString *remoteControlInterfaceID;
@property (readonly, nonatomic) char hasAppOptions;
@property (retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

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
- (int)StringAsCommand:(id)a0;
- (id)commandAsString:(int)a0;

@end
