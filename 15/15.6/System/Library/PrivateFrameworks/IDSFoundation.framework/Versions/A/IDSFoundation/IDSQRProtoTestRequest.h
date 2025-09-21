@class NSString;

@interface IDSQRProtoTestRequest : PBRequest <NSCopying> {
    struct { unsigned char requestedErrorCode : 1; unsigned char requestedMessageType : 1; } _has;
}

@property (nonatomic) unsigned int testOptionFlags;
@property (nonatomic) char hasRequestedMessageType;
@property (nonatomic) unsigned int requestedMessageType;
@property (nonatomic) char hasRequestedErrorCode;
@property (nonatomic) unsigned int requestedErrorCode;
@property (readonly, nonatomic) char hasSubOperation;
@property (retain, nonatomic) NSString *subOperation;

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
