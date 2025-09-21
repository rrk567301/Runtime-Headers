@class NSData, NSString;

@interface AMSXDProtoMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *messageData;
@property (readonly, nonatomic) char hasLogKey;
@property (retain, nonatomic) NSString *logKey;

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
