@class NSData, ICEncryptionMetadata;

@interface ICEncryptionKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *serializedData;

- (BOOL)validate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)serialize;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedData:(id)a0;
- (BOOL)deserializeWithData:(id)a0;
- (id)initWithKeyData:(id)a0 metadata:(id)a1;

@end
