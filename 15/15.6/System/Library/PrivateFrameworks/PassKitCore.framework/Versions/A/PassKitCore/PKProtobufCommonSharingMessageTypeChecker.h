@class NSString;

@interface PKProtobufCommonSharingMessageTypeChecker : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasMessageType;
@property (retain, nonatomic) NSString *messageType;

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
