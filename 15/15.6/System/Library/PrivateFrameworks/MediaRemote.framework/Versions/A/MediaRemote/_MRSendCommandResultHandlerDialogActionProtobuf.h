@class NSString, _MRSendCommandMessageProtobuf;

@interface _MRSendCommandResultHandlerDialogActionProtobuf : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) _MRSendCommandMessageProtobuf *event;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
