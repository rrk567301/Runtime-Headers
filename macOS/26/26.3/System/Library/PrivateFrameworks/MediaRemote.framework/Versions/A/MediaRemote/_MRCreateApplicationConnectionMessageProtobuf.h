@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionRequestInfoProtobuf;

@interface _MRCreateApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestInfo;
@property (retain, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *requestInfo;

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
