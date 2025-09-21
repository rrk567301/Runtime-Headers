@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char usage : 1; unsigned char usagePage : 1; unsigned char buttonDown : 1; } _has;
}

@property (nonatomic) char hasUsagePage;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) char hasUsage;
@property (nonatomic) unsigned int usage;
@property (nonatomic) char hasButtonDown;
@property (nonatomic) char buttonDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
