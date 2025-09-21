@class NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateEndMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *request;
@property (readonly, nonatomic) char hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
