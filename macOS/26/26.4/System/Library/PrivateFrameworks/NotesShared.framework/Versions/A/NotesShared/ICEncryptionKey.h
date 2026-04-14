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
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)deserializeWithData:(id)a0;
- (id)initWithSerializedData:(id)a0;
- (id)initWithKeyData:(id)a0 metadata:(id)a1;

@end
