@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionMessageProtobuf;

@interface _MRApplicationConnectionProtocolMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasApplicationMessage;
@property (retain, nonatomic) _MRApplicationConnectionMessageProtobuf *applicationMessage;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;

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
