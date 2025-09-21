@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionRequestInfoProtobuf;

@interface _MRCreateApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;
@property (readonly, nonatomic) char hasRequestInfo;
@property (retain, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *requestInfo;

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
