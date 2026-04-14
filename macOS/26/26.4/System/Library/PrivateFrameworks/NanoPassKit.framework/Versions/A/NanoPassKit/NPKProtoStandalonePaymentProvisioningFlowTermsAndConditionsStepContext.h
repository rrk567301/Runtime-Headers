@class NSString, NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying> {
    struct { unsigned char allowNonSecureHTTP : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTermsURL;
@property (retain, nonatomic) NSString *termsURL;
@property (nonatomic) BOOL hasAllowNonSecureHTTP;
@property (nonatomic) BOOL allowNonSecureHTTP;
@property (readonly, nonatomic) BOOL hasProduct;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
