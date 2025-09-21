@class NSString;

@interface BMPBSubscriptionEvent : PBCodable <NSCopying> {
    NSString *_bootUUID;
    NSString *_client;
    NSString *_identifier;
    NSString *_useCase;
    char _starting;
    struct { unsigned char starting : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
