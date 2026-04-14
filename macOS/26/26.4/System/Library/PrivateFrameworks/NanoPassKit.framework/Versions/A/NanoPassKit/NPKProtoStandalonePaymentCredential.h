@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (readonly, nonatomic) BOOL hasExpiration;
@property (retain, nonatomic) NSString *expiration;
@property (readonly, nonatomic) BOOL hasLongDescription;
@property (retain, nonatomic) NSString *longDescription;

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
