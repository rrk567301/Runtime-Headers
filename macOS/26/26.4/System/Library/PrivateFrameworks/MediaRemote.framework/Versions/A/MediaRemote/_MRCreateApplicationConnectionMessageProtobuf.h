@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionRequestInfoProtobuf;

@interface _MRCreateApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestInfo;
@property (retain, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *requestInfo;

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
