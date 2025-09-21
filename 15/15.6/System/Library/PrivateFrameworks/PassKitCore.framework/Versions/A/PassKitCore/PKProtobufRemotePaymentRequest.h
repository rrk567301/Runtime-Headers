@class PKProtobufPaymentRequest, NSString;

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {
    struct { unsigned char paymentType : 1; } _has;
}

@property (readonly, nonatomic) char hasPaymentRequest;
@property (retain, nonatomic) PKProtobufPaymentRequest *paymentRequest;
@property (readonly, nonatomic) char hasPaymentApplicationIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasPaymentType;
@property (nonatomic) unsigned int paymentType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
