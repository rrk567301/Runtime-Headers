@class NSString, _MRSendCommandMessageProtobuf;

@interface _MRSendCommandResultHandlerDialogActionProtobuf : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) _MRSendCommandMessageProtobuf *event;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;

@end
