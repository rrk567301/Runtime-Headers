@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionMessageProtobuf;

@interface _MRApplicationConnectionProtocolMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (retain, nonatomic) _MRApplicationConnectionMessageProtobuf *applicationMessage;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;

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
