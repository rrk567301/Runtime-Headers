@class NSString, NSData, NSMutableArray;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {
    struct { unsigned char epochTimestamp : 1; unsigned char expiresAt : 1; } _has;
}

@property (readonly, nonatomic) char hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) char hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) char hasNonce;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) char hasEpochTimestamp;
@property (nonatomic) unsigned long long epochTimestamp;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) char hasRetryNonce;
@property (retain, nonatomic) NSString *retryNonce;
@property (nonatomic) char hasExpiresAt;
@property (nonatomic) unsigned long long expiresAt;
@property (readonly, nonatomic) char hasInitiativeContext;
@property (retain, nonatomic) NSString *initiativeContext;
@property (readonly, nonatomic) char hasInitiative;
@property (retain, nonatomic) NSString *initiative;
@property (retain, nonatomic) NSMutableArray *signedFields;
@property (readonly, nonatomic) char hasAmpEnrollmentPinning;
@property (retain, nonatomic) NSData *ampEnrollmentPinning;
@property (readonly, nonatomic) char hasOperationalAnalyticsIdentifier;
@property (retain, nonatomic) NSString *operationalAnalyticsIdentifier;

+ (Class)signedFieldsType;

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
- (void)addSignedFields:(id)a0;
- (void)clearSignedFields;
- (id)signedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)signedFieldsCount;

@end
