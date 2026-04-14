@class _MRNowPlayingPlayerPathProtobuf, NSString, _MRPlaybackSessionRequestProtobuf, _MRErrorProtobuf, _MRSendCommandResultStatusProtobuf;

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;
@property (readonly, nonatomic) BOOL hasSetPlaybackSessionCommandStatus;
@property (retain, nonatomic) _MRSendCommandResultStatusProtobuf *setPlaybackSessionCommandStatus;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
