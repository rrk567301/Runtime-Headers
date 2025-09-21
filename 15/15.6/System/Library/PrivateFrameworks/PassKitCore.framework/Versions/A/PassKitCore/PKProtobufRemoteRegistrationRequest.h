@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying> {
    struct { unsigned char registerBroker : 1; unsigned char registerPeerPayment : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) char hasRegisterBroker;
@property (nonatomic) char registerBroker;
@property (nonatomic) char hasRegisterPeerPayment;
@property (nonatomic) char registerPeerPayment;

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
