@class NSString, NSMutableArray;

@interface NPKProtoHandleCredentialsChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *credentialsBytes;
@property (readonly, nonatomic) BOOL hasPaymentApplicationID;
@property (retain, nonatomic) NSString *paymentApplicationID;

+ (Class)credentialsBytesType;

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
- (void)addCredentialsBytes:(id)a0;
- (void)clearCredentialsBytes;
- (id)credentialsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialsBytesCount;

@end
