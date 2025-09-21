@class NSString, NSData, CSDMessagingHandle, TUVoucher;

@interface CSDMessagingVoucher : PBCodable <NSCopying>

@property (readonly, nonatomic) TUVoucher *tuVoucher;
@property (readonly, nonatomic) char hasHandle;
@property (retain, nonatomic) CSDMessagingHandle *handle;
@property (readonly, nonatomic) char hasTokenPrefixedURI;
@property (retain, nonatomic) NSString *tokenPrefixedURI;
@property (readonly, nonatomic) char hasUnsafeData;
@property (retain, nonatomic) NSData *unsafeData;
@property (readonly, nonatomic) char hasEncryptedData;
@property (retain, nonatomic) NSData *encryptedData;

+ (id)voucherWithTUVoucher:(id)a0;

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

@end
