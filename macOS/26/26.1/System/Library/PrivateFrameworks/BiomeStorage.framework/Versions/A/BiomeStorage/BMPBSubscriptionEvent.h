@class NSString;

@interface BMPBSubscriptionEvent : PBCodable <NSCopying> {
    NSString *_bootUUID;
    NSString *_client;
    NSString *_identifier;
    NSString *_useCase;
    BOOL _starting;
    struct { unsigned char starting : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
