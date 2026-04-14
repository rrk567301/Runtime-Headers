@class NSData, _MRApplicationConnectionMessageHeaderProtobuf;

@interface _MRApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) _MRApplicationConnectionMessageHeaderProtobuf *header;
@property (readonly, nonatomic) BOOL hasUnderlyingMessage;
@property (retain, nonatomic) NSData *underlyingMessage;

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
