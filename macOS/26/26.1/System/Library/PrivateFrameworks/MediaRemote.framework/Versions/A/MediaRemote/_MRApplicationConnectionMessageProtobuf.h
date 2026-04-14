@class NSData, _MRApplicationConnectionMessageHeaderProtobuf;

@interface _MRApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) _MRApplicationConnectionMessageHeaderProtobuf *header;
@property (readonly, nonatomic) BOOL hasUnderlyingMessage;
@property (retain, nonatomic) NSData *underlyingMessage;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
