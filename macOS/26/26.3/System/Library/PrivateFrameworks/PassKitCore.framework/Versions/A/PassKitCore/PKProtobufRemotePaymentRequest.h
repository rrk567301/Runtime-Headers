@class PKProtobufPaymentRequest, NSString;

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {
    struct { unsigned char paymentType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPaymentRequest;
@property (retain, nonatomic) PKProtobufPaymentRequest *paymentRequest;
@property (readonly, nonatomic) BOOL hasPaymentApplicationIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) unsigned int paymentType;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
