@class NSData, _MRApplicationConnectionMessageHeaderProtobuf;

@interface _MRApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) _MRApplicationConnectionMessageHeaderProtobuf *header;
@property (readonly, nonatomic) BOOL hasUnderlyingMessage;
@property (retain, nonatomic) NSData *underlyingMessage;

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
