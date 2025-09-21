@class NSString, NSData;

@interface CKDPAnonymousShareAddRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasAnonymousShareTupleHash;
@property (retain, nonatomic) NSString *anonymousShareTupleHash;
@property (readonly, nonatomic) char hasEncryptedShareTuple;
@property (retain, nonatomic) NSData *encryptedShareTuple;

+ (id)options;

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
