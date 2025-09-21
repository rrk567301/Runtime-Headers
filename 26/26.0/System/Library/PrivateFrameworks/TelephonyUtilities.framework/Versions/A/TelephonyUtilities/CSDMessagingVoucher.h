@class NSString, NSData, CSDMessagingHandle, TUVoucher;

@interface CSDMessagingVoucher : PBCodable <NSCopying>

@property (readonly, nonatomic) TUVoucher *tuVoucher;
@property (readonly, nonatomic) BOOL hasHandle;
@property (retain, nonatomic) CSDMessagingHandle *handle;
@property (readonly, nonatomic) BOOL hasTokenPrefixedURI;
@property (retain, nonatomic) NSString *tokenPrefixedURI;
@property (readonly, nonatomic) BOOL hasUnsafeData;
@property (retain, nonatomic) NSData *unsafeData;
@property (readonly, nonatomic) BOOL hasEncryptedData;
@property (retain, nonatomic) NSData *encryptedData;

+ (id)voucherWithTUVoucher:(id)a0;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
