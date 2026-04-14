@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionRequestInfoProtobuf;

@interface _MRCreateApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestInfo;
@property (retain, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *requestInfo;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
