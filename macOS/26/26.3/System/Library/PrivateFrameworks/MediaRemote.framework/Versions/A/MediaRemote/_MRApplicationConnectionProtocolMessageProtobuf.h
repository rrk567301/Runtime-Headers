@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionMessageProtobuf;

@interface _MRApplicationConnectionProtocolMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (retain, nonatomic) _MRApplicationConnectionMessageProtobuf *applicationMessage;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;

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
