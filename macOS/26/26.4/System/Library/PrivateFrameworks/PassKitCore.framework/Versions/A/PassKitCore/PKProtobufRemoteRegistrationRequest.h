@interface PKProtobufRemoteRegistrationRequest : PBRequest <NSCopying> {
    struct { unsigned char registerBroker : 1; unsigned char registerPeerPayment : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasRegisterBroker;
@property (nonatomic) BOOL registerBroker;
@property (nonatomic) BOOL hasRegisterPeerPayment;
@property (nonatomic) BOOL registerPeerPayment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
