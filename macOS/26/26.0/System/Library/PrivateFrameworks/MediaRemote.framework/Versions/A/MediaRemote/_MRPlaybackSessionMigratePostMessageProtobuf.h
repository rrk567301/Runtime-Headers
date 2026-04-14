@class _MRPlaybackSessionMigrateRequestProtobuf, NSString, _MRNowPlayingPlayerPathProtobuf, _MRErrorProtobuf, _MRDictionaryProtobuf;

@interface _MRPlaybackSessionMigratePostMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *request;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) BOOL hasSetPlaybackSessionCommandID;
@property (retain, nonatomic) NSString *setPlaybackSessionCommandID;
@property (readonly, nonatomic) BOOL hasMetrics;
@property (retain, nonatomic) _MRDictionaryProtobuf *metrics;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;

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
