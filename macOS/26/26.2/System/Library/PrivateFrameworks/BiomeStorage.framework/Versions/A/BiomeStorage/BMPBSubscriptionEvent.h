@class NSString;

@interface BMPBSubscriptionEvent : PBCodable <NSCopying> {
    NSString *_bootUUID;
    NSString *_client;
    NSString *_identifier;
    NSString *_useCase;
    BOOL _starting;
    struct { unsigned char starting : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
