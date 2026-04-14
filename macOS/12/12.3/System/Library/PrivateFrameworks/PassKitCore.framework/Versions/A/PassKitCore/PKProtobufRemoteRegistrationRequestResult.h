@interface PKProtobufRemoteRegistrationRequestResult : PBCodable <NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
