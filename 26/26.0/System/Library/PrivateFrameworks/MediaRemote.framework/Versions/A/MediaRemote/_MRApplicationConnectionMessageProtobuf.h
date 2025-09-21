@class NSData, _MRApplicationConnectionMessageHeaderProtobuf;

@interface _MRApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) _MRApplicationConnectionMessageHeaderProtobuf *header;
@property (readonly, nonatomic) BOOL hasUnderlyingMessage;
@property (retain, nonatomic) NSData *underlyingMessage;

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
