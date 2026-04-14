@class ICEncryptionMetadata, NSData;

@interface ICEncryptionObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *wrappedEncryptionKey;
@property (readonly, nonatomic) NSData *encryptedData;

- (id)serialized;
- (BOOL)validate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedData:(id)a0;
- (id)initWithMetadata:(id)a0 wrappedEncryptionKey:(id)a1 encryptedData:(id)a2;

@end
