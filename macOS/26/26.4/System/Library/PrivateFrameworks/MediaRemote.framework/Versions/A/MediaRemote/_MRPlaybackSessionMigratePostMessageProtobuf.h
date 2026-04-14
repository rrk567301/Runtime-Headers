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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
