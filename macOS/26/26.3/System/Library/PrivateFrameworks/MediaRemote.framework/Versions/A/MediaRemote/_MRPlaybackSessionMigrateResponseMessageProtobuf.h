@class _MRPlaybackSessionMigrateRequestProtobuf;

@interface _MRPlaybackSessionMigrateResponseMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *request;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
