@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying> {
    struct { unsigned char creditLimit : 1; unsigned char currentBalance : 1; } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL hasCurrentBalance;
@property (nonatomic) double currentBalance;
@property (nonatomic) BOOL hasCreditLimit;
@property (nonatomic) double creditLimit;

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
